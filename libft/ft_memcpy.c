/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:57:07 by mda-silv          #+#    #+#             */
/*   Updated: 2021/09/21 12:57:11 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
