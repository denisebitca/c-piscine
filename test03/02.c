#include <bsd/string.h>
#include "../test-libraries.c"
#include "../03/ex02/ft_strcat.c"
#include <stdio.h>

int	main(void)
{
	char	t1[11] = "miaou";
	char	t2[11] = "miaou";
	char	*t3 = "tests";

	strcat(t1, t3);
	ft_strcat(t2, t3);
       	
	test_str(t1, t2, "ex02 - strcat return comparison");
}
