#include "../test-libraries.c"
#include "../04/ex00/ft_strlen.c"
#include <string.h>

int	main(void)
{
	test_int(strlen("neufletre"), ft_strlen("neufletre"), "ex00 - checking if strlen works");
}
