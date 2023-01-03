#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ct;
	unsigned int	i;

	if (!s1 || !s2)
		return (NULL);
	ct = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	i = 0;
	if (ct)
	{
		while (*s1)
			ct[i++] = *s1++;
		while (*s2)
			ct[i++] = *s2++;
		ct[i] = '\0';
		return (ct);
	}
	return (NULL);
}
