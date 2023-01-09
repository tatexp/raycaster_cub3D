#include "parse.h"

//set parametr value from line
//also check, that there is no unwanted symbols after the parametr value
int		param_str_set(char **param, char *line)
{
	int len;

	len = segment_len(line);
	*param = ft_substr(line, 0, len);
	if (*param == NULL)
		return (-1);
	if (end_of_line_check(line + len) == -1)
		return (-1);
	return (0);
}


//find parametr name by 3-letter code and set paramtr value by exec param_str_set function
//if not find parametr name? print error message
int		param_str_parse(char *line, t_cub *v, char *param_name)
{
	line += whitespaces_skip(line);
	if (ft_strncmp(param_name, "NOR", 3) == 0)
		return (param_str_set(&v->texture_north, line));
	else if (ft_strncmp(param_name, "STH", 3) == 0)
		return (param_str_set(&v->texture_south, line));
	else if (ft_strncmp(param_name, "WST", 3) == 0)
		return (param_str_set(&v->texture_west, line));
	else if (ft_strncmp(param_name, "EST", 3) == 0)
		return (param_str_set(&v->texture_east, line));
	else if (ft_strncmp(param_name, "SPR", 3) == 0)
		return (param_str_set(&v->texture_sprite, line));
	else
		return (error_message_print("Unknown parametr name"));
	return (0);
}
