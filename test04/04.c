#include "../04/ex04/ft_putnbr_base.c"
#include <limits.h>
#include "../test-libraries.c"

int	main(void)
{
	ft_putnbr_base(INT_MIN, "01");
	write(1, "\n", 1);
	ft_putnbr_base(INT_MAX, "01");
	write(1, "\n", 1);
	ft_putnbr_base(INT_MIN, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(INT_MAX, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(137457610, "abcdefghijklmnopqrstuvwxyz");
	write(1, "\n", 1);
	ft_putnbr_base(55, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(0, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789./");
	write(1, "\n", 1);
	ft_putnbr_base(0, "ABCDEFGHIJKLMNOPQRSTUVWXYZab  cdefghijklmnopqr---++-stuvwxyz0123456789./");
	write(1, "\n", 1);
}
