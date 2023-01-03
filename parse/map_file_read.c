#include "parse.h"

int		map_file_read(int fd, t_cub *v)
{
	int		read_lines_result;
	char	*line;

	read_lines_result = get_next_line(fd, &line);
	if (read_lines_result == -1)
		error_message_print("Error while reading map's file");
	
	while (read_lines_result > 0)
	{
		printf("line = %s\n", line);
		strings_parse(line, v);
		free(line);
		read_lines_result = get_next_line(fd, &line);
	}
	if (line)
		free(line);
	return 0;
}


