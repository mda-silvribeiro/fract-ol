#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ls1;
	const unsigned char	*ls2;

	i = 0;
	ls1 = s1;
	ls2 = s2;
	while (i < n)
	{
		if (ls1[i] != ls2[i])
			return (ls1[i] - ls2[i]);
		i++;
	}
	return (0);
}
