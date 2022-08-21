/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:54:38 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/21 11:20:20 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

int						size(char *str);
int						ft_check_char(char c);
int						ft_check_split(int *j, int i, char *str, int *tab);
void					ft_print_4x4_tab(int **tab);
void					ft_split_rush_str(char *str, int *tab);
int						ft_process_rush_tab(int *tab);
void					rush(int **exterior, int **interior);
void					ft_populate(int **exterior, int **interior, int *tab);

#endif
