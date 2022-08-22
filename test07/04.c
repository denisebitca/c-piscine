/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:07:20 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/22 11:41:54 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_convert_base(char *nbr, char *base_from, char *base_to);
void	test_str(char *expected, char *received, char *description);

int	main(void)
{
	test_str("-1111111", ft_convert_base("-7F", "0123456789ABCDEF", "01"), "ex04 - hex to binary");
	test_str("-80000000", ft_convert_base("-10000000000000000000000000000000", "01", "0123456789ABCDEF"), "ex04 - binary to hex, int min");
	test_str("42", ft_convert_base("101010", "01", "0123456789"), "ex04 - binary to decimal");
	test_str("loutre", ft_convert_base("137457610", "0123456789", "abcdefghijklmnopqrstuvwxyz"), "ex04 - decimal to base 26");
}
