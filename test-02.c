/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 08:36:52 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/12 10:09:29 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./test-libraries.c"
#include "./02/ex00/ft_strcpy.c"
#include "./02/ex01/ft_strncpy.c"
#include <string.h>

int	main(void)
{
	//Test ex00
	
	char one[7];
	char ex00two[7];
	char ex00t2[7];

	one[0] = 's';
	one[1] = 'o';
	one[2] = 'u';
	one[3] = 'r';
	one[4] = 'c';
	one[5] = 'e';
	one[6] = '\0';

	strcpy(ex00two, one);

	ft_strcpy(ex00t2, one);

	test_str(ex00two, ex00t2, "ex00");

	test_int('\0', ex00t2[6], "ex00");

	//Test ex01
	
	char ex01t1[4];
	char ex01t2[4];
	int size;

	size = 4;

	strncpy(ex01t1, one, size);
	
	ft_strncpy(ex01t2, one, size);

	test_str(ex01t1, ex01t2, "ex01");

	return (0);
}
