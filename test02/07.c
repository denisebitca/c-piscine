/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:39:57 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 14:53:39 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../02/ex07/ft_strupcase.c"
#include <ctype.h>

void	strToUpper(char *str);

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

	strToUpper(uppercase);
	strToUpper(lowercase);
	strToUpper(randomcase);
	strToUpper(rcasenum);
	strToUpper(numbers);

	test_str(uppercase, ft_strupcase(c1), "ex07 - uppercase");
	test_str(lowercase, ft_strupcase(c2), "ex07 - lowercase");
	test_str(randomcase, ft_strupcase(c3), "ex07 - random case");
	test_str(rcasenum, ft_strupcase(c4), "ex07 - random case + numbers");
	test_str(numbers, ft_strupcase(c5), "ex07 - numbers");
}

void	strToUpper(char *str)
{
	int i;

	i = 0;
	while (str[i]) { 
        	str[i] = toupper(str[i]); 
        	i++; 
    	} 
}
