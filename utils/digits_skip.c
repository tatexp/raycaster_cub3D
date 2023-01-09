#include "utils.h"

int		digits_skip(char *line)
{
	int		counter;

	counter = 0;
	while (line[counter] && line[counter] >= '0' && line[counter] <= '9')
			++counter;
	return counter;
}
