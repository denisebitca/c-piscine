/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <rbitca@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:07:54 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/10 14:59:23 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./00/ex00/ft_putchar.c"
#include "./00/ex01/ft_print_alphabet.c"

int	main(void)
{
	write(1, "exercise 0:\n", 12);
	ft_putchar('e');
	write(1, "\nexercise 1:\n", 13);
	ft_print_alphabet();
	return (0);
}	
