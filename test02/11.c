/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:13:26 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 19:27:43 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../02/ex11/ft_putstr_non_printable.c"

int	main(void)
{
	srand(time(NULL));
	
	char c;

	c = 0;
	while(c++ < 20)
		ft_putstr_non_printable(&c);
	
	c = 127;
	ft_putstr_non_printable(&c);
}
