#ifndef STRUCTURE_H
# define STRUCTURE_H
# include <math.h>

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


typedef struct	s_img {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_img;

typedef struct	s_ray
{
	float	cam_x;
	float	fov;
	float	x;
	float	y;
	int		map_x;
	int		map_y;
	float	side_x;
	float	side_y;
	float	delta_x;
	float	delta_y;
	// float	wall_dist;
	// float	wall_h;
	// float	wall_start;
	// float	wall_fnsh;
	int		step_x;
	int		step_y;
	int		hit;
	int		side;
	// float	wall_x;
	// int		tex_x;
	// float	tex_step;
	// float	tex_pos;
	// int		sp_side;
	// float	sp_width;
	// int		sp_count;
}				t_ray;

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
	void		*mlx;
	void		*mlx_win;
	t_img		img;
}				t_cub;


#endif
