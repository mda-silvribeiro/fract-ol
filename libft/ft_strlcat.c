/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:04:35 by mda-silv          #+#    #+#             */
/*   Updated: 2021/09/21 13:04:37 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;

	i = 0;
	j = 0;
	if (size == 0)
		return (size + ft_strlen(src));
	while (dest[i] != '\0')
		i++;
	destlen = i;
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dest[i] = '\0';
	if (i > size)
		return (size + ft_strlen(src));
	else
		return (destlen + ft_strlen(src));
}
