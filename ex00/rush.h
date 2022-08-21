/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:54:38 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/21 18:23:43 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

void					presolve(int **i, int **e);
void					presolve_up(int **i, int **e);
void					presolve_down(int **i, int **e);
void					presolve_right(int **i, int **e);
void					presolve_left(int **i, int **e);
int						verif_left_line(int *tab, int lcon);
int						verif_right_line(int *tab, int rcon);
int						verif_up_line(int **tab, int pos, int tcon);
int						verif_down_line(int **tab, int pos, int bcon);
int						validation(int next, int ***pain, int r, int c);
int						backtrack(int **i, int **e, int r, int c);
int						size(char *str);
int						ft_check_char(char c);
int						ft_check_split(int *j, int i, char *str, int *tab);
void					ft_print_4x4_tab(int **tab);
void					ft_split_rush_str(char *str, int *tab);
int						ft_process_rush_tab(int *tab);
void					rush(int **exterior, int **interior);
void					ft_populate(int **exterior, int **interior, int *tab);

#endif
