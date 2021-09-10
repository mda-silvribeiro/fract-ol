#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int length;

	i = 0;
	length = ft_strlen((char *)s);
	while (i < length)
	{
		i++;
		s++;
	}
	while (i >= 0)
	{
		if (*s == (const char)c)
			return ((char *)s);
		s--;
		i--;
	}
	return (NULL);
}
