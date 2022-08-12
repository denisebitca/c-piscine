/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 08:36:52 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/12 14:32:47 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../02/ex01/ft_strncpy.c"
#include <string.h>

int	main(void)
{
	//Test ex01
	
	srand(time(NULL));

	int r = rand() % 99;

	char *one = rand_string_alloc(r);

	char two[r];
	
	strcpy(two, one);

	int size = r / 2;

	char ex01t1[size];
	char ex01t2[size];

	strncpy(ex01t1, one, size);

	ft_strncpy(ex01t2, two, size);

	int i = 0;

	while(i < size)
	{
		test_char(ex01t1[i], ex01t2[i], "ex01 - random string test");
		i++;
	}

	return (0);
}
