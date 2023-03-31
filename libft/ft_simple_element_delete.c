#include "libft.h"

void	ft_simple_element_delete(void *elem)
{
	free(elem);
	elem = NULL;
}
