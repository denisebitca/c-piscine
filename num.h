/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:10:01 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/27 22:35:15 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUM_H
# define NUM_H
# define TRUE 1

/*
	magnitude_tens can only be between 20 and 90 in
	steps of ten (20, 30, 40, 50, 60, 70, 80 and 90)
	(corresponds with the English between twenty and ninty) OR 0.
	
	unit_tens can only be between 1 and 19 if magnitude_tens = 0
	OR between 0 and 9 if magnitude_tens is between 20 and 90.
*/

typedef struct	s_tens
{
	int		magnitude_tens;
	int		unit_tens;
}				t_tens;

/*
	unit_hundreds can only be between 0 and 9. If it's equal to 0,
	there is no number in the hundreds, but there are tens!

	If tens is not set (== NULL), there are no tens.
	If unit_hundreds = 0, there are tens.

	tens cannot be null if unit_hundreds is null and
	vice-versa.
*/

typedef struct	s_hundreds
{
	int		unit_hundreds;
	t_tens	*tens;
}				t_hundreds;

/*
	unit_full must always be set. If it is not set, something
	is seriously wrong with the code.

	magnitude_full is one of these: [1000000000, 1000000, 1000, 1].
*/

typedef struct	s_fullnum
{
	t_hundreds	unit_full;
	int			magnitude_full;
	t_fullnum	*next;
}				t_fullnum;

t_tens	*ft_create_tens(int magnitude_tens, int unit_tens);
t_hundreds	*ft_create_hundreds(t_tens *tens, int unit_hundreds);
t_numfull	*ft_create_numfull(t_hundreds *unit_full, int magnitude_full);
void	*ft_push_elem_last(t_numfull **begin_list, t_hundreds *unit_full, int mf);

#endif
