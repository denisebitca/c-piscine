/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:40:41 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/27 20:07:33 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "num.h"
#include <unistd.h>
#include <stdlib.h>

/*
* Functions related to t_tens
*/

t_tens	*ft_create_tens(int magnitude_tens, int unit_tens)
{
	t_tens	*ret;

	if (magnitude_tens == 0 && unit_tens == 0)
		return (NULL);
	ret = malloc(sizeof(t_tens));
	if (ret == NULL)
	{
		write(1, "Malloc Error\n", 13); 
		return (NULL);
	}
	ret.magnitude_tens = magnitude_tens;
	ret.unit_tens = unit_tens;
	return (ret);
}

/*
* Functions related to t_hundreds
*/

t_hundreds	*ft_create_hundreds(t_tens *tens, int unit_hundreds)
{
	t_hundreds	*ret;

	ret = malloc(sizeof(t_hundreds));
	if (ret == NULL)
	{
		write(1, "Malloc Error\n", 13);
		return (NULL);
	}
	ret.unit_hundreds = unit_hundreds;
	ret->tens = tens;
	return (ret);
}

/*
* Functions related to t_numfull
*/

t_numfull	*ft_create_numfull(t_hundreds *unit_full, int magnitude_full)
{
	t_numfull	*ret;

	if ((*unit_full) == NULL)
		return (NULL);
	ret = malloc(sizeof(t_numfull));
	if (ret == NULL)
	{
		write(1, "Malloc Error\n", 13);
		return (NULL);
	}
	ret.magnitude_full = magnitude_full;
	ret->unit_full = unit_full;
	ret->next = NULL;
	return (ret);
}

void	*ft_push_elem_last(t_numfull **begin_list, t_hundreds *unit_full, int mf) 
{
	t_numfull	*elem;
	t_numfull	*newelem;

	newelem = ft_create_numfull(unit_full, mf);
	elem = (*begin_list);
	if (elem == NULL)
	{
		*begin_list = newelem;
		return ;
	}
	while (elem->next != NULL)
		elem = elem->next;
	elem->next = newelem;
}
