/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 08:36:52 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/12 14:39:51 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../02/ex00/ft_strcpy.c"
#include <string.h>

int	main(void)
{
	//Test ex00
	
	srand(time(NULL));
	int size = rand() % 99;
	char *one = rand_string_alloc(size);
	char ex00two[size];
	char ex00t2[size];

	strcpy(ex00two, one);

	ft_strcpy(ex00t2, one);

	test_str(ex00two, ex00t2, "ex00 - compare strcpy and ft_strcpy");

	test_char('\0', ex00t2[size - 1], "ex00 - check if last char is NULL");

	return (0);
}
