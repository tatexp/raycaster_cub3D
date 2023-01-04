#include "parse.h"

int		strings_parse(char *line, t_cub *v)
{
	if (!line)
		return (1);
	//skip whitespaces
	line += whitespaces_skip(line);
	
	//check parameter's name with possible parameters
	if (*line && *line == 'R' && *(line + 1) && *(line + 1) == ' ') //resolution
	{
		if ( (param_int_parse(line + 2, v, "RES") == -1) )
			return (error_message_print("Error while parsing map"));
	}
	else if (*line && *line == 'F' && *(line + 1) && *(line + 1) == ' ') //floor's color
	{
		if ( (param_int_parse(line + 2, v, "FLR") == -1) )
			return (error_message_print("Error while parsing map"));
	}
	else if (*line && *line == 'C' && *(line + 1) && *(line + 1) == ' ') //ceiling's color
	{
		if ( (param_int_parse(line + 2, v, "CLN") == -1) )
			return (error_message_print("Error while parsing map"));
	}
	return (0);
}
