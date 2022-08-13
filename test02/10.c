/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 08:36:52 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 17:17:39 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../02/ex10/ft_strlcpy.c"
#include <bsd/string.h>

int	main(void)
{
	//Test ex01
	
	srand(time(NULL));

	int r = rand() % 99;

	char one[r];
	
	rand_string(one, r, 0);

	char two[r];
	
	strcpy(two, one);

	int size = r / 2;

	char ex01t1[size];
	char ex01t2[size];

	strlcpy(ex01t1, one, size);

	ft_strlcpy(ex01t2, two, size);

	int i = 0;

	test_str(ex01t1, ex01t2, "ex10 - random string");

	test_char('\0', ex01t2[i-1], "ex10 - last byte null");

	return (0);
}
