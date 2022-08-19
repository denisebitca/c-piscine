/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:00:39 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/19 09:30:23 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src);
void	test_str(char *expected, char *received, char *description);

int	main(void)
{
	char *one;
	char *two;
	char *three = "COPYME PLS";

	one = strdup(three);
	two = ft_strdup(three);
	test_str(one, two, "ex00 - compare strdup and ft_strdup");
	free(one);
	free(two);	
}
