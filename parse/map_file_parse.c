#include "parse.h"
#include <errno.h>
#include <stdio.h>

int		map_file_parse(char *map_file, t_cub *v)
{
	int		fd;

	printf("%s\n", map_file);
	fd = open(map_file, O_RDONLY);
	if (fd == -1)
	{
		printf("%d\n", errno);
		return (error_message_print("Can't open map file"));
	}

	if (map_file_read(fd, v) == -1)
		return (-1);
	
	if (map_to_array(v) == -1)
		return (-1);
	
	if (player_parse(v) == -1)
		return (-1);
	close(fd);
	return (0);
}


