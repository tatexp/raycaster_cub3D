#ifndef PARSE_H
# define PARSE_H

# include <stdio.h> //del
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "structure.h"
# include "libft.h"
# include "errors.h"
# include "utils.h"

int		cub_atoi(char *str, int *param, int *delim, int is_last);
int		map_file_parse(char *map_file, t_cub *v);
int		map_file_read(int fd, t_cub *v);
int		map_settings_parse(char *line, t_cub *v);
int		param_int_parse(char *line, t_cub *v, char *param_name);
int		param_str_parse(char *line, t_cub *v, char *param_name);
int		player_parse(t_cub *v);

#endif