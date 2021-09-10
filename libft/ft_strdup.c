#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		length;
	int		i;

	length = ft_strlen(src);
	i = 0;
	dest = (char *)malloc(length + 1);
	if (dest == NULL)
		return (dest);
	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
