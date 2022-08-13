/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:45:41 by rbitca            #+#    #+#             */
/*   Updated: 2022/08/13 16:34:54 by rbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test-libraries.c"
#include "../02/ex09/ft_strcapitalize.c"

int	main(void)
{
	char	*str_expected;
	char	*str_expected2;

	char	str_randomcase2[62] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str_randomcase[49] = "jE sUiS unE jOlIe jolEi-flu421r AAaa f++++++tRes";
	str_expected = "Je Suis Une Jolie Jolei-Flu421r Aaaa F++++++Tres";
	str_expected2 = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";

	test_str(str_expected, ft_strcapitalize(str_randomcase), "ex09 - phrase 1");
	test_str(str_expected2, ft_strcapitalize(str_randomcase2), "ex09 - phrase 2");
	return (0);
}
