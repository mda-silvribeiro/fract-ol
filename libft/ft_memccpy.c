/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:44:49 by mda-silv          #+#    #+#             */
/*   Updated: 2021/09/21 12:44:51 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
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
		if (lsrc[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
