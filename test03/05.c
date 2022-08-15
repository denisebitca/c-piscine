#include <bsd/string.h>
#include "../test-libraries.c"
#include "../03/ex05/ft_strlcat.c"
#include <stdio.h>

int	main(void)
{
	char	t1[10] = "miaou";
	char	t2[10] = "miaou";
	char	*t3 = "tests";

	test_int(strlcat(t1, t3, 7), ft_strlcat(t2, t3, 7), "ex05 - strlcat return comparison");
	test_str(t1, t2, "ex05 - string comparison");
	test_int(strlcat(t1, t3, 0), ft_strlcat(t2, t3, 0), "ex05 - strlcat no size comparison");
	test_str(t1, t2, "ex05 - string comparison");
}
