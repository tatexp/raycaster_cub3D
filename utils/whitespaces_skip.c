#include "utils.h"

int		whitespaces_skip(char *line)
{
	int		counter;

	counter = 0;
	while (line[counter] && (
		line[counter] == ' ' ||
		line[counter] == '\t' ||
		line[counter] == '\n' ||
		line[counter] == '\v' ||
		line[counter] == '\r' ||
		line[counter] == '\f')
	)
			++counter;
	return counter;
}
