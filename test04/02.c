#include "../04/ex02/ft_putnbr.c"
#include <limits.h>

int	main(void)
{
	ft_putnbr(INT_MAX);
	ft_write('\n');
	ft_putnbr(INT_MIN);
	ft_write('\n');
	ft_putnbr(INT_MAX-1);
	ft_write('\n');
	ft_putnbr(INT_MIN+1);
	ft_write('\n');
	ft_putnbr(1234);
	ft_write('\n');
	ft_putnbr(-1241);
	ft_write('\n');
	ft_putnbr(5192938);
	ft_write('\n');
}
