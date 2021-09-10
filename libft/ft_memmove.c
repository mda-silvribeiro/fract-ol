#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == src)
		return (dst);
	if (dst > src)
		ft_memrcpy(dst, src, len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
