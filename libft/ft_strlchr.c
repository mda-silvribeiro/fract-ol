#include "libft.h"

size_t	ft_strlchr(char *s, char c, size_t len)
{
	size_t i;

	i = 0;
	while (s[i] != '\0' && i < len)
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (0);
}
