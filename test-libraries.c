/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-libraries.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:33:38 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 14:31:13 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

static char *rand_string(char *str, size_t size, int numeric)
{
    const char *charset;
    if (numeric == 1)
    {
    	charset = "0123456789";
    } 
    else if (numeric == 2)
    {
    	charset = "01234aBcDeFgHiJkLmNoPqRsTuVwXyZ56789";
    }
    else if (numeric == 3)
    {
	charset = "abcdefghijklmnopqrstuvwxyz";
    }
    else if (numeric == 4)
    {
	charset = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    }
    else if (numeric == 5)
    {
	charset = "\1\2\3\4\5\6\7\10\11\12\13\14A5L";
    }
    else 
    {
    	charset = "aBcDeFgHiJkLmNoPqRsTuVwXyZ";
    }
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

char* rand_string_alloc(size_t size, int numeric)
{
     srand(time(NULL));
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size, numeric);
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
