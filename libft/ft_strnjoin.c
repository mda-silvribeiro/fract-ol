#include "ft_printf.h"

char	*ft_strnjoin(char *s1, char *s2, int l1, int l2)
{
	char	*ret;
	int		i;
	int		x;

	i = 0;
	x = 0;
	ret = (char*)ft_memalloc(sizeof(char) * l1 + l2 + 1);
	while (i < l1)
	{
		ret[i] = s1[i];
		i++;
	}
	while (i < l1 + l2)
	{
		ret[i] = s2[x];
		i++;
		x++;
	}
	ret[i] = '\0';
	return (ret);
}
