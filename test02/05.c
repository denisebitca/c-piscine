/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:40:46 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 14:17:31 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../02/ex05/ft_str_is_uppercase.c"

int	main(void)
{
	srand(time(NULL));
	test_int(0, ft_str_is_uppercase(rand_string_alloc(15, 1)), "ex05 - only numbers");
	test_int(0, ft_str_is_uppercase(rand_string_alloc(15, 0)), "ex05 - only random case letters");
	test_int(0, ft_str_is_uppercase(rand_string_alloc(15, 2)), "ex05 - random case letters and numbers");
	test_int(1, ft_str_is_uppercase(rand_string_alloc(15, 4)), "ex05 - uppercase letters");
	test_int(1, ft_str_is_uppercase(""), "ex05 - nothing");
}
