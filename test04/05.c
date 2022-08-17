/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 08:42:13 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/17 08:55:16 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../04/ex05/ft_atoi_base.c"

int	main(void)
{
	printf("%i\n", ft_atoi_base("1000000000000000000000000000000", "01"));
	printf("%i\n", ft_atoi_base("", "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789./"));
}
