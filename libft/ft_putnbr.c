#include "libft.h"

void	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-21", 3);
		n = 47483648;
	}
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n / 10 > 0)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}
