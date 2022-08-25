/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:25:52 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/25 10:02:07 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

int	sum(int a, int b)
{
	return (a + b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int	div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (b);
}

int	multi(int a, int b)
{
	return (a * b);
}

int	mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (b);
}
