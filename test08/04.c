/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:35:38 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/23 14:25:38 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include "../08/ex05/ft_show_tab.c"
#include <stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	t_stock_str *test;
	char *av[] = {"string1", "string2", "str3", "str4"};
	
	test = ft_strs_to_tab(4, av);
	test[1].copy = "zero";
	ft_show_tab(test);
	free(test);
}
