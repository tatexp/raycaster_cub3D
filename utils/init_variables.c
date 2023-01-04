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

void	init_variables(t_cub *v)
{
	init_colors(v);
	init_screen(v);
}
