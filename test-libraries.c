/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-libraries.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:33:38 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/11 11:19:25 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "./00/ex07/ft_putnbr.c"

void	test_int(int expected, int received, char* description)
{
	printf("Test: %s\n", description);
	if(expected == received)
		printf("Test passed! ");
	else
		printf("Test failed! ");
	printf("expected: %i, received: %i\n", expected, received);
}
