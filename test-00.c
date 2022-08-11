/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <rbitca@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:07:54 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/11 13:23:07 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./00/ex00/ft_putchar.c"
#include "./00/ex01/ft_print_alphabet.c"
#include "./00/ex02/ft_print_reverse_alphabet.c"
#include "./00/ex03/ft_print_numbers.c"
#include "./00/ex04/ft_is_negative.c"
#include "./00/ex05/ft_print_comb.c"
#include "./00/ex06/ft_print_comb2.c"
#include "./00/ex07/ft_putnbr.c"

int	main(void)
{
	write(1, "exercise 0:\n", 12);
	ft_putchar('e');
	write(1, "\nexercise 1:\n", 13);
	ft_print_alphabet();
	write(1, "\nexercise 2:\n", 13);
	ft_print_reverse_alphabet();
	write(1, "\nexercise 3:\n", 13);
	ft_print_numbers();
	write(1, "\nexercise 4:\n", 13);
	ft_is_negative(-1);
	write(1, "\n", 1);
	ft_is_negative(1);
	write(1, "\nexercise 5:\n", 13);
	ft_print_comb();
	write(1, "\nexercise 6:\n", 13);
	ft_print_comb2();
	write(1, "\nexercise 7:\n", 13);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(-2147483647);
	write(1, "\n", 1);
	ft_putnbr(2147483646);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(1234);
	write(1, "\n", 1);
	ft_putnbr(8);
	write(1, "\n", 1);
	ft_putnbr(-1234);
	return (0);
}	
