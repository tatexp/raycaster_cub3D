#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dp;
	int		i;

	i = ft_strlen(s1);
	dp = (char *)malloc(sizeof(char) * (i + 1));
	if (dp)
	{
		while (*s1)
			*dp++ = *s1++;
		*dp = '\0';
		return (dp - i);
	}
	return (NULL);
}
