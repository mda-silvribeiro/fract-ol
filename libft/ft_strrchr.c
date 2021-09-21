/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:12:15 by mda-silv          #+#    #+#             */
/*   Updated: 2021/09/21 13:12:17 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen((char *)s);
	while (i < length)
	{
		i++;
		s++;
	}
	while (i >= 0)
	{
		if (*s == (const char)c)
			return ((char *)s);
		s--;
		i--;
	}
	return (NULL);
}
