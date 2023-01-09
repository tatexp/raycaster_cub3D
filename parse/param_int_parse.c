#include "parse.h"

int		param_int_parse(char *line, t_cub *v, char *param_name)
{
	int delim;
	int counter;
	int result;

	delim = -1;
	counter = 0;
	result = 0;
	line += whitespaces_skip(line);
	if (ft_strncmp(param_name, "RES", 3) == 0)
	{
		result = cub_atoi(line + counter, &v->screen.w, &delim, 0);
		if (result == -1)
			return (-1);
		else
			counter += result;
		result = cub_atoi(line + counter, &v->screen.h, &delim, 1);
		if (result == -1)
			return (-1);
	}
	else if (ft_strncmp(param_name, "FLR", 3) == 0)
	{
		v->floor.t = 0;

		result = cub_atoi(line + counter, &v->floor.r, &delim, 0); //set floors's red color
		if (result == -1)
			return (-1);
		else
			counter += result;

		result = cub_atoi(line + counter, &v->floor.g, &delim, 0); //set floors's green color
		if (result == -1)
			return (-1);
		else
			counter += result;

		result = cub_atoi(line + counter, &v->floor.b, &delim, 1); //set floors's blue color
		if (result == -1)
			return (-1);
	}
	else if (ft_strncmp(param_name, "CLN", 3) == 0)
	{
		v->ceiling.t = 0;

		result = cub_atoi(line + counter, &v->ceiling.r, &delim, 0); //set ceiling's red color
		if (result == -1)
			return (-1);
		else
			counter += result;

		result = cub_atoi(line + counter, &v->ceiling.g, &delim, 0); //set ceiling's green color
		if (result == -1)
			return (-1);
		else
			counter += result;

		result = cub_atoi(line + counter, &v->ceiling.b, &delim, 1); //set ceiling's blue color
		if (result == -1)
			return (-1);
	}
	// printf("delim = %d, counter = %d, line = |%s|\n", delim, counter, line + counter);
	return 0;
}
