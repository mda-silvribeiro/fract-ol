/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:12:59 by mda-silv          #+#    #+#             */
/*   Updated: 2021/09/21 13:13:01 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*string;

	if (s == NULL)
		return (NULL);
	string = (char *)malloc(sizeof(char) * len + 1);
	if (string == NULL)
		return (string);
	string[len] = '\0';
	i = 0;
	while (i < len)
	{
		string[i] = s[i + start];
		i++;
	}
	return (string);
}
