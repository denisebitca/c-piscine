/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:07:57 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/27 22:35:43 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct	s_list
{
	int		magnitude;
	char	*words;
	t_list	*next;
}				t_list;

t_list	*ft_create_elem_parse(int magnitude, char *words);
void	ft_push_elem_parse_last(t_list **begin_list, int magnitude, char *words);
char	*ft_find_elem_parse(t_list *list, int magnitude);

#endif
