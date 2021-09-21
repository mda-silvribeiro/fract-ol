/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:44:38 by mda-silv          #+#    #+#             */
/*   Updated: 2021/09/21 12:44:41 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*memory;

	i = 0;
	memory = (char *)malloc(size);
	if (memory == NULL)
		return (NULL);
	while (i < size)
	{
		memory[i] = 0;
		i++;
	}
	return ((void *)memory);
}
