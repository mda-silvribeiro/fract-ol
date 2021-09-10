#include "libft.h"

size_t	ft_substring_size(const char *s, char c)
{
	size_t len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}
