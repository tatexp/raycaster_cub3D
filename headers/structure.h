#ifndef STRUCTURE_H
# define STRUCTURE_H

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

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

typedef struct s_maze
{
	t_list	*maze_lst;
	int		h;
	int		w;
}				t_maze;

typedef struct s_player
{
	double	x;
	double	y;
	double	dir;	//direction
}				t_player;

//main structure for all variables
typedef struct s_cub
{
	char		**map;
	t_screen	screen;
	t_colors	floor;
	t_colors	ceiling;
	t_maze		maze;
	t_player	player;
	char		*texture_north;
	char		*texture_south;
	char		*texture_east;
	char		*texture_west;
	char		*texture_sprite;
	
}				t_cub;


#endif
