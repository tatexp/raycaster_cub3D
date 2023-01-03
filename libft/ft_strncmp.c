#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (--n)
	{
		if (*s1 == *s2++)
		{
			if (*s1++ == '\0')
				return (0);
		}
		else
			return (*(unsigned char *)s1 - *(unsigned char *)(--s2));
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}