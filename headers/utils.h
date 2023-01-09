#ifndef UTILS_H
# define UTILS_H

# include <stdio.h> //del
# include "structure.h"
# include "errors.h"
# include "libft.h"

int		whitespaces_skip(char *line);
//int		digits_skip(char *line);
void	init_variables(t_cub *v);
int		end_of_line_check(char *line);
size_t	segment_len(const char *s);

#endif