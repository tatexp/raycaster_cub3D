#include "utils.h"

void	init_screen(t_cub *v)
{
	v->screen.w = -1;
	v->screen.h = -1;
}

void	init_colors(t_cub *v)
{
	//floor's color
	v->floor.t = -1;
	v->floor.r = -1;
	v->floor.g = -1;
	v->floor.b = -1;

	//ceiling's color
	v->ceiling.t = -1;
	v->ceiling.r = -1;
	v->ceiling.g = -1;
	v->ceiling.b = -1;
}

void	init_textures(t_cub *v)
{
	v->texture_north = NULL;
	v->texture_south = NULL;
	v->texture_east = NULL;
	v->texture_west = NULL;
	v->texture_sprite = NULL;
}

void	init_maze(t_cub *v)
{
	v->maze.maze_lst = NULL;
	v->maze.h = 0;
	v->maze.w = 0;
}

void	init_player(t_cub *v)
{
	v->player.x = 0.0;
	v->player.y = 0.0;
	v->player.dir = 0.0;
}

void	init_variables(t_cub *v)
{
	init_colors(v);
	init_screen(v);
	init_textures(v);
	init_maze(v);
	init_player(v);
}
