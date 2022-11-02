#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first_new;

	first_new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&new, (*del));
			return (NULL);
		}
		if (!first_new)
			first_new = new;
		else
			ft_lstadd_back(&first_new, new);
		lst = lst->next;
	}
	return (first_new);
}
