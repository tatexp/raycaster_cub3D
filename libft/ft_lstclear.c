#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list_clone;

	if (lst && del)
	{
		while (*lst)
		{
			list_clone = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = list_clone;
		}
	}
}
