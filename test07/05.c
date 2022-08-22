/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 08:24:01 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/22 09:20:09 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_word_counter(char *charset, char *str);
char	**ft_split(char *str, char *charset);
void	test_str(char *expected, char *received, char *description);
void	test_int(int expected, int received, char *description);

int	main(void)
{
	char *teststring = "i am a test_string,with,plenty-of seperators--";
	char *seperators = " _,-";
	char **seperated = ft_split(teststring, seperators);

	test_int(9, ft_word_counter(seperators, teststring), "ex05 - word counter");
	test_str("i", seperated[0], "ex05 - first word");
	test_str("am", seperated[1], "ex05 - second word");
	test_str("a", seperated[2], "ex05 - third word");
	test_str("test", seperated[3], "ex05 - fourth word");
	test_str("string", seperated[4], "ex05 - fifth word");
	test_str("with", seperated[5], "ex05 - sixth word");
	test_str("plenty", seperated[6], "ex05 - seventh word");
	test_str("of", seperated[7], "ex05 - eighth word");
	test_str("seperators", seperated[8], "ex05 - ninth word");

	test_int(1, (seperated[9] == 0), "ex05 - checking if last array equal to 0");
}
