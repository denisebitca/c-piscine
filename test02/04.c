/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:40:46 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 14:17:37 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../02/ex04/ft_str_is_lowercase.c"

int	main(void)
{
	srand(time(NULL));
	test_int(0, ft_str_is_lowercase(rand_string_alloc(15, 1)), "ex04 - only numbers");
	test_int(0, ft_str_is_lowercase(rand_string_alloc(15, 0)), "ex04 - only random case letters");
	test_int(0, ft_str_is_lowercase(rand_string_alloc(15, 2)), "ex04 - random case letters and numbers");
	test_int(1, ft_str_is_lowercase(rand_string_alloc(15, 3)), "ex04 - lowercase letters");
	test_int(1, ft_str_is_lowercase(""), "ex04 - nothing");
}
