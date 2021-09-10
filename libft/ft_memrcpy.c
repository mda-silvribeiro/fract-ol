#include "libft.h"

void	*ft_memrcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ldst;
	unsigned char	*lsrc;

	ldst = (unsigned char *)dst;
	lsrc = (unsigned char *)src;
	while (n > 0)
	{
		ldst[n - 1] = lsrc[n - 1];
		n--;
	}
	return (dst);
}
