#include "libft.h"

char	*ft_strndup(const char *str, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char *)malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (new);
	while (i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
