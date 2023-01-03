#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ch;

	ch = (char *)s;
	while (*ch != (char)c)
	{
		if (*ch == '\0')
			return (NULL);
		ch++;
	}
	return (ch);
}
