#ifndef STRUCTURE_H
# define STRUCTURE_H

//screen resolution
typedef struct s_screen
{
	int	w;
	int	h;
}				t_screen;

typedef struct s_colors
{
	int t;
	int	r;
	int	g;
	int b;
}				t_colors;

//main structure for all variables
typedef struct s_cub
{
	char	**map;
	t_screen	screen;
	t_colors	floor;
	t_colors	ceiling;
}				t_cub;


#endif
