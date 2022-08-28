/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itow.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 23:22:06 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/28 09:31:14 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITOW_H
# define ITOW_H

# include "list.h"

int	ft_check(unsigned int val, unsigned int m, t_list *list);
int	ft_check_itow(unsigned int nb, t_list *list);
void	ft_itow_helper(unsigned int val, unsigned int m, t_list *list);
void	ft_itow(unsigned int nb, t_list *list);

#endif
