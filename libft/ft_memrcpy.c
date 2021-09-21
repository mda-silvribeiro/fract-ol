/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:57:41 by mda-silv          #+#    #+#             */
/*   Updated: 2021/09/21 12:57:47 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
