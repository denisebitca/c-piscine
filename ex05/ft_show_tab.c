/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:39:20 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/22 19:43:54 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par)
{
	while (par[++i]->str != 0)
	{
		ft_putstr(par[i]->str);
		write(1, '\n', 1);
		ft_putnbr(par[i]->size);
		write(1, '\n', 1);
		ft_putstr(par[i]->copy);
		write(1, '\n', 1);
	}
}
