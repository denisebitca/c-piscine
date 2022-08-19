/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:52:11 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/19 12:23:15 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);
void	test_str(char *expected, char *received, char *description);

int	main(void)
{
	char *strs[] = {"banane", "pomme", "hotdog", "fromage", "douleur et souffrance"};
	char *sep = ", ";
	char *real = "banane, pomme, hotdog, fromage, douleur et souffrance";
	char *joined = ft_strjoin(5, strs, sep);

	test_str(real, joined, "ex03 - joining my groceries list");

	free(joined);

	char *strs2[] = {"", "1", "412412414251256125831283712747518", "AAAAAAAAaaaaaaaaaaaaaaasdx17", ""};
	char *sep2 = "meow";
	char *real2 = "meow1meow412412414251256125831283712747518meowAAAAAAAAaaaaaaaaaaaaaaasdx17meow";
	char *joined2 = ft_strjoin(5, strs2, sep2);

	test_str(real2, joined2, "ex03 - joining garbage");
	
	free(joined2);

	printf("Test: ex03 - freeing an empty string\nThis test cannot be checked automatically.\nIf it SEGFAULTS, you failed the test.\n\n");
	

	char *joined3 = ft_strjoin(0, strs2, sep2);
	free(joined3);
}
