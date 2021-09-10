#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *second;

	second = *alst;
	new->next = second;
	*alst = new;
}
