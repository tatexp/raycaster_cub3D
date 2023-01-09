#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	int				sz;

	if (!s)
		return (0);
	i = ft_strlen(s);
	if (start >= i)
		sz = 0;
	else if (len > i - start)
		sz = i - start;
	else
		sz = len;
	sub = (char *)malloc((sz + 1) * sizeof(char));
	if (sub)
	{
		sub[sz] = '\0';
		while (sz--)
			sub[sz] = s[start + sz];
		return (sub);
	}
	return (NULL);
}
