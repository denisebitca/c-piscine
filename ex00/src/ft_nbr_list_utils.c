/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_list_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 23:02:11 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/28 07:36:55 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list.h>

t_list	*ft_create_elem_parse(int magnitude, char *words)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (elem == NULL)
		return (NULL);
	elem.magnitude = magnitude;
	elem.words = words;
	elem.next = NULL;
	return (elem);
}

void	ft_push_elem_parse_last(int magnitude, char *words, t_list **begin_list)
{
	t_list	*elem;

	if ((*begin_list) == NULL)
	{
		(*begin_list) = ft_create_elem_parse(magnitude, words);
		return ;
	}
	elem = (*begin_list);
	while (elem->next)
		elem = elem->next;
	elem->next = ft_create_elem_parse(magnitude, words); 
}

char	*ft_find_elem_parse(t_list *list, int magnitude)
{
	t_list	*elem;

	elem = list;
	while (elem)
	{
		if (magnitude == elem.magnitude)
			return (elem.words);
		elem = elem->next;
	}
	return (NULL);
}
