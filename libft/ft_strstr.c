/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:12:38 by mda-silv          #+#    #+#             */
/*   Updated: 2021/09/21 13:12:40 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	define_i(int *save, int i)
{
	if (*save != 0)
	{
		i = *save;
		*save = 0;
		return (i);
	}
	else
		return (i + 1);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	*save;

	i = 0;
	j = 0;
	save = (int *)malloc(sizeof(int) * 1);
	if (ft_strcmp(needle, "") == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		*save = 0;
		if (haystack[i] == needle[j])
			*save = i + 1;
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i - ft_strlen(needle));
		}
		i = define_i(save, i);
		j = 0;
	}
	return (NULL);
}
