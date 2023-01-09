#include "parse.h"

int		map_settings_parse(char *line, t_cub *v)
{
	if (!line)
		return (1);
	//skip whitespaces
	line += whitespaces_skip(line);
	
	//check parameter's name with possible parameters
	if (ft_strlen(line) >= 2 && *line == 'R' && *(line + 1) == ' ') //resolution
	{
		if ( (param_int_parse(line + 2, v, "RES") == -1) )
			return (error_message_print("Error while parsing map"));
	}
	else if (ft_strlen(line) >= 2 && *line == 'F' && *(line + 1) == ' ') //floor's color
	{
		if ( (param_int_parse(line + 2, v, "FLR") == -1) )
			return (error_message_print("Error while parsing map"));
	}
	else if (ft_strlen(line) >= 2 && *line == 'C' && *(line + 1) == ' ') //ceiling's color
	{
		if ( (param_int_parse(line + 2, v, "CLN") == -1) )
			return (error_message_print("Error while parsing map"));
	}
	else if (ft_strlen(line) >= 3 && *line == 'N' && *(line + 1) == 'O' && *(line + 2) == ' ') //wall's north texture
	{
		if ( (param_str_parse(line + 3, v, "NOR") == -1) )
			return (error_message_print("Error while parsing map"));
	}
	else if (ft_strlen(line) >= 3 && *line == 'S' && *(line + 1) == 'O' && *(line + 2) == ' ') //wall's south texture
	{
		if ( (param_str_parse(line + 3, v, "STH") == -1) )
			return (error_message_print("Error while parsing map"));
	}
	else if (ft_strlen(line) >= 3 && *line == 'W' && *(line + 1) == 'E' && *(line + 2) == ' ') //wall's west texture
	{
		if ( (param_str_parse(line + 3, v, "WST") == -1) )
			return (error_message_print("Error while parsing map"));
	}
	else if (ft_strlen(line) >= 3 && *line == 'E' && *(line + 1) == 'A' && *(line + 2) == ' ') //wall's east texture
	{
		if ( (param_str_parse(line + 3, v, "EST") == -1) )
			return (error_message_print("Error while parsing map"));
	}
	else if (ft_strlen(line) >= 2 && *line == 'S' && *(line + 1) == ' ') //sprite's texture
	{
		if ( (param_str_parse(line + 2, v, "SPR") == -1) )
			return (error_message_print("Error while parsing map"));
	}
	return (0);
}
