#include "libft.h"

char	*ft_reverse_string(char *str)
{
	char	*new;
	int		len;
	int		i;
	int		j;

	i = 0;
	len = ft_strlen(str);
	j = len - 1;
	new = (char *)malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (new);
	new[len] = '\0';
	while (i < len)
	{
		new[i] = str[j];
		i++;
		j--;
	}
	return (new);
}
