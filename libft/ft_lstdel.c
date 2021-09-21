/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-silv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:43:13 by mda-silv          #+#    #+#             */
/*   Updated: 2021/09/21 12:43:16 by mda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*todelete;
	t_list	*temp;

	todelete = *alst;
	while (todelete != NULL)
	{
		temp = todelete;
		todelete = todelete->next;
		del(temp->content, temp->content_size);
		free(temp);
	}
	*alst = NULL;
}
