#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*memory;

	i = 0;
	memory = (char *)malloc(size);
	if (memory == NULL)
		return (NULL);
	while (i < size)
	{
		memory[i] = 0;
		i++;
	}
	return ((void *)memory);
}
