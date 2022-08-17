#include "../04/ex03/ft_atoi.c"
#include <limits.h>
#include "../test-libraries.c"
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_atoi("2147483649"));
	printf("%i\n", ft_atoi("-2147483648"));
	printf("%i\n", ft_atoi("-2147483647"));
	printf("%i\n", ft_atoi("                      ----------++++-++-     +-+---++  -+++--2147 d483647"));
	printf("%i\n", ft_atoi("                      ----------++++-+++-+---++-+++--2147 d483647"));
	printf("%i\n", ft_atoi("                      ----------++++-+++-+---++-+++--2147483647"));
}
