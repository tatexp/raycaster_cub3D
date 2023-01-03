#include "parse.h"

int		strings_parse(char *line, t_cub *v)
{
	if (!line)
		return 1;
	while (*line != '\0')
	{
		//skip whitespaces
		while (*line != '\0' && (*line == ' ' || *line == '\t'))
			++line;
		
		//check parameter's name with possible parameters
		if (*line && *line == 'R' && *(line + 1) && *(line + 1) == ' ') //resolution
		{
			printf("char = %c, this is resolution\n", *(line + 1));
			param_int_parse(line, v, "RES");
		}
		++line;
	}

	return 0;
}
