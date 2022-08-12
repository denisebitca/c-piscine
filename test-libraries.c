/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-libraries.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:33:38 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/12 14:30:51 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

static char *rand_string(char *str, size_t size)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJK...";
    if (size) {
        --size;
        for (size_t n = 0; n < size; n++) {
            int key = rand() % (int) (sizeof charset - 1);
            str[n] = charset[key];
        }
        str[size] = '\0';
    }
    return str;
}

char* rand_string_alloc(size_t size)
{
	 srand(time(NULL));
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}

void	printColor(int condition)
{
	if(condition){
		printf("\033[1;32m");
		printf("Test passed! ");
	} else {
		printf("\033[1;31m");
		printf("Test failed! ");
	}
	printf("\033[0m");
}

void	test_int(int expected, int received, char* description)
{
	printf("Test: %s\n", description);
	printColor(expected == received);
	printf("expected: %i, received: %i\n\n", expected, received);
}

void	test_char(char expected, char received, char* description)
{
	printf("Test: %s\n", description);
	printColor(expected == received);
	printf("expected: %c, received: %c\n\n", expected, received);
}

void	test_str(char *expected, char *received, char *description)
{
	printf("Test: %s\n", description);
	printColor(strcmp(expected, received) == 0);
	printf("expected: %s, received: %s\n\n", expected, received);
}
