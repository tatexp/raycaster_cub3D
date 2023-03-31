#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ch;

	if (len != 0)
	{
		ch = b;
		while (len--)
			ch[len] = (unsigned char)c;
	}
	return (b);
}
