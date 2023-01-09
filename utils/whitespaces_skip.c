#include "utils.h"

int		whitespaces_skip(char *line)
{
	int		counter;

	counter = 0;
	while (line[counter] && ft_iswhitespace(line[counter]))
			++counter;
	return counter;
}
