#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *todel;

	todel = *alst;
	del(todel->content, todel->content_size);
	*alst = NULL;
}
