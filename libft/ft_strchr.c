#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	int length;

	i = 0;
	length = ft_strlen((char *)s);
	while (i < length + 1)
	{
		if (*s == (const char)c)
			return ((char *)s);
		s++;
		i++;
	}
	return (NULL);
}
