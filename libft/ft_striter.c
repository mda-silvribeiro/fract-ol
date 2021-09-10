#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s == NULL || f == NULL)
		return ;
	while (*s != '\0')
	{
		f(s);
		s++;
	}
	return ;
}
