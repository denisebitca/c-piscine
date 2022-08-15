/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:02:55 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/15 11:16:27 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../03/ex04/ft_strstr.c"
#include <string.h>

int	main(void)
{
	char	*t3 = "Find my needle edle eeedle";
	char	*t4 = ft_strstr(t3, "feedle");

	test_str(strstr(t3, "needle"), ft_strstr(t3, "needle"), "ex04 - strstr comparison");
	test_str("", t4, "ex04, empty result comparison");
}
