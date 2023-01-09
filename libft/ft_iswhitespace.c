#include "libft.h"

int		ft_iswhitespace(int c)
{
	return(c == ' ' || c == '\t' || c == '\n' ||
		c == '\v' || c == '\r' || c == '\f');
}
