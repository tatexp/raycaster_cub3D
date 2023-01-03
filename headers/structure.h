#ifndef STRUCTURE_H
# define STRUCTURE_H

//screen resolution
typedef struct s_screen
{
	int	w;
	int	h;
}				t_screen;

//main structure for all variables
typedef struct s_cub
{
	char	**map;
	t_screen	screen;
}				t_cub;


#endif
