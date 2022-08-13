/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:49:18 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 12:22:10 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../02/ex02/ft_str_is_alpha.c"

int	main(void)
{
	srand(time(NULL));
	test_int(0, ft_str_is_alpha(rand_string_alloc(15, 1)), "ex02 - only numbers");
	test_int(1, ft_str_is_alpha(rand_string_alloc(15, 0)), "ex02 - only letters");
	test_int(0, ft_str_is_alpha(rand_string_alloc(15, 2)), "ex02 - letters and numbers");
	test_int(1, ft_str_is_alpha(""), "ex02 - nothing");
}
