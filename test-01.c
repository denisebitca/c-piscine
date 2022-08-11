/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:30:52 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/11 11:49:14 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./01/ex00/ft_ft.c"
#include "./01/ex01/ft_ultimate_ft.c"
#include "./01/ex02/ft_swap.c"
#include "./test-libraries.c"

int	main(void)
{
	int	ex;
	int	dx;
	int	*a;
	int	**b;
	int	***c;
	int	****d;
	int	*****e;
	int	******f;
	int	*******g;
	int	********h;
	int	*********i;

	ex = 35;

	ft_ft(&ex);

	//TEST ex0
	test_int(42, ex, "ex00");
	
	ex = 21;
	a = &ex;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;

	ft_ultimate_ft(i);
	
	//TEST ex1
	test_int(42, ex, "ex01");

	//TEST ex2
	ex = 15;
	dx = 30;

	ft_swap(&ex, &dx);

	test_int(30, ex, "ex01 - a");
	test_int(15, dx, "ex02 - b");

}
