/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <rbitca@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:07:54 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/10 15:57:32 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./00/ex00/ft_putchar.c"
#include "./00/ex01/ft_print_alphabet.c"
#include "./00/ex02/ft_print_reverse_alphabet.c"
#include "./00/ex03/ft_print_numbers.c"
#include "./00/ex04/ft_is_negative.c"


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
	return (0);
}	
