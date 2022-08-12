/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:30:52 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/11 17:35:00 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./01/ex00/ft_ft.c"
#include "./01/ex01/ft_ultimate_ft.c"
#include "./01/ex02/ft_swap.c"
#include "./01/ex03/ft_div_mod.c"
#include "./01/ex04/ft_ultimate_div_mod.c"
#include "./01/ex05/ft_putstr.c"
#include "./01/ex07/ft_rev_int_tab.c"
#include "./01/ex08/ft_sort_int_tab.c"
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
	
	//TEST ex3
	int	div;
	int	mod;

	ex = 7;
	dx = 4;

	ft_div_mod(ex, dx, &div, &mod);
	
	test_int(1, div, "ex03 - b not 0");
	test_int(3, mod, "ex03 - b not 0");

	//TEST ex4
	div = 7;
	mod = 4;

	ft_ultimate_div_mod(&div, &mod);
	
	test_int(1, div, "ex04 - b not 0");
	test_int(3, mod, "ex04 - b not 0");

	//TEST ex5
	printf("Test: ex05 - please check manually!\n");
	ft_putstr("If you see this, it worked!\n");

	//TEST ex6
	
	char *test = "Fives";

	int testlen = ft_strlen(test);

	test_int(5, testlen, "ex06");

	//TEST ex7
	
	int t[3] = {1, 5, 2};

	ft_rev_int_tab(t, 3);

	test_int(2, t[0], "ex07 - pos1");
	test_int(5, t[1], "ex07 - pos2");
	test_int(1, t[2], "ex07 - pos3");

	//TEST ex8
	
	int t2[10] = {5, 2, 9, 1, 3, 10, 6, 4, 8, 7};

	ft_sort_int_tab(t2, 10);

	test_int(1, t2[0], "ex08 - pos1");

	test_int(2, t2[1], "ex08 - pos2");

	test_int(3, t2[2], "ex08 - pos3");

	test_int(4, t2[3], "ex08 - pos4");

	test_int(5, t2[4], "ex08 - pos5");

	test_int(6, t2[5], "ex08 - pos6");

	test_int(7, t2[6], "ex08 - pos7");

	test_int(8, t2[7], "ex08 - pos8");

	test_int(9, t2[8], "ex08 - pos9");

	test_int(10, t2[9], "ex08 - pos10");

}
