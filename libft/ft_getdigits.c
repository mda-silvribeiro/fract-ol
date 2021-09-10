#include "libft.h"

int	ft_getdigits(int n)
{
	int		digits;

	if (n < 0)
		n *= -1;
	digits = 1;
	while (n / 10 > 0)
	{
		digits += 1;
		n = n / 10;
	}
	return (digits);
}
