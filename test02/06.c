/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:40:46 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 14:27:57 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../02/ex06/ft_str_is_printable.c"

int	main(void)
{
	srand(time(NULL));
	test_int(1, ft_str_is_printable(rand_string_alloc(15, 1)), "ex06 - only numbers");
	test_int(1, ft_str_is_printable(rand_string_alloc(15, 0)), "ex06 - only random case letters");
	test_int(1, ft_str_is_printable(rand_string_alloc(15, 2)), "ex06 - random case letters and numbers");
	test_int(1, ft_str_is_printable(rand_string_alloc(15, 4)), "ex06 - uppercase letters");
	test_int(1, ft_str_is_printable(rand_string_alloc(15, 3)), "ex06 - lowercase letters");
	test_int(1, ft_str_is_printable(""), "ex06 - nothing");
	test_int(0, ft_str_is_printable(rand_string_alloc(15, 5)), "ex06 - random non printable characters and printable");
}
