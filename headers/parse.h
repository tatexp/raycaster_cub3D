#ifndef PARSE_H
# define PARSE_H

# include <stdio.h> //del
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "structure.h"
# include "libft.h"
# include "errors.h"

int		map_file_parse(char *map_file, t_cub *v);
int		map_file_read(int fd, t_cub *v);
int		strings_parse(char *line, t_cub *v);
int		param_int_parse(char *line, t_cub *v, char *param_name);

#endif