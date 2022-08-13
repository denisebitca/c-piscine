/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:39:57 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 14:59:34 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../02/ex08/ft_strlowcase.c"
#include <ctype.h>

void	strToLower(char *str);

int	main(void)
{
	char	*uppercase = rand_string_alloc(15, 4);
	char	*lowercase = rand_string_alloc(15, 3);
	char	*randomcase = rand_string_alloc(15, 0);
	char	*rcasenum = rand_string_alloc(15, 2);
	char	*numbers = rand_string_alloc(15, 1);

	char	c1[15];
	char	c2[15];
	char	c3[15];
	char	c4[15];
	char	c5[15];

	strcpy(c1, uppercase);
	strcpy(c2, lowercase);
	strcpy(c3, randomcase);
	strcpy(c4, rcasenum);
	strcpy(c5, numbers);

	strToLower(uppercase);
	strToLower(lowercase);
	strToLower(randomcase);
	strToLower(rcasenum);
	strToLower(numbers);

	test_str(uppercase, ft_strlowcase(c1), "ex08 - uppercase");
	test_str(lowercase, ft_strlowcase(c2), "ex08 - lowercase");
	test_str(randomcase, ft_strlowcase(c3), "ex08 - random case");
	test_str(rcasenum, ft_strlowcase(c4), "ex08 - random case + numbers");
	test_str(numbers, ft_strlowcase(c5), "ex08 - numbers");
}

void	strToLower(char *str)
{
	int i;

	i = 0;
	while (str[i]) { 
        	str[i] = tolower(str[i]); 
        	i++; 
    	} 
}
