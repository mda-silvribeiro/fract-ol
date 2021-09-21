/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:02:20 by mda-silv          #+#    #+#             */
/*   Updated: 2021/09/21 13:02:22 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen((char *)s);
	while (i < length + 1)
	{
		if (*s == (const char)c)
			return ((char *)s);
		s++;
		i++;
	}
	return (NULL);
}
