#include "libft.h"

size_t	segment_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && !ft_iswhitespace(s[i]))
		i++;
	return (i);
}
