/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:40:46 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 12:43:11 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../02/ex03/ft_str_is_numeric.c"

int	main(void)
{
	srand(time(NULL));
	test_int(1, ft_str_is_numeric(rand_string_alloc(15, 1)), "ex03 - only numbers");
	test_int(0, ft_str_is_numeric(rand_string_alloc(15, 0)), "ex03 - only letters");
	test_int(0, ft_str_is_numeric(rand_string_alloc(15, 2)), "ex03 - letters and numbers");
	test_int(1, ft_str_is_numeric(""), "ex03 - nothing");
}
