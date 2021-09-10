#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ldst;
	unsigned char	*lsrc;

	ldst = (unsigned char *)dst;
	lsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ldst[i] = lsrc[i];
		i++;
	}
	return (dst);
}
