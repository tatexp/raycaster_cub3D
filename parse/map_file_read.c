#include "parse.h"

int		map_file_read(int fd, t_cub *v)
{
	int		read_lines_result;
	int		map_starts;
	char	*line;

	map_starts = 0;
	while ((read_lines_result = get_next_line(fd, &line)) > 0)
	{
		if (!line)
			break;
		printf("line = %s\n", line);
		if (map_starts != 1 && ft_isdigit(line[whitespaces_skip(line)]) == 1) //attention! no parameters name starts with digit
			map_starts = 1;
		if (map_starts == 1)
		{
			ft_lstadd_back(&v->maze.maze_lst, ft_lstnew((void *)ft_strdup(line)));
			++v->maze.h;
			if ((int)ft_strlen(line) > v->maze.w)
				v->maze.w = ft_strlen(line);
		}
		else
		{
			if (map_settings_parse(line, v) == -1)
				return (-1);
		}
		free(line);
		line = NULL;
	}
	if (line)
		free(line);
	if (read_lines_result == -1)
		return (error_message_print("Error while reading map's file"));
	return (0);
}
