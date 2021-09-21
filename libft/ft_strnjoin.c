/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:08:58 by mda-silv          #+#    #+#             */
/*   Updated: 2021/09/21 13:11:44 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strnjoin(char *s1, char *s2, int l1, int l2)
{
	char	*ret;
	int		i;
	int		x;

	i = 0;
	x = 0;
	ret = (char *)ft_memalloc(sizeof(char) * l1 + l2 + 1);
	while (i < l1)
	{
		ret[i] = s1[i];
		i++;
	}
	while (i < l1 + l2)
	{
		ret[i] = s2[x];
		i++;
		x++;
	}
	ret[i] = '\0';
	return (ret);
}
