#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long i;
	unsigned char *string;

	i = 0;
	string = (unsigned char *)b;
	while (i < len)
	{
		string[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
