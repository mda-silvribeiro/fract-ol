#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *element;

	element = lst;
	while (element != NULL)
	{
		f(element);
		element = element->next;
	}
}
