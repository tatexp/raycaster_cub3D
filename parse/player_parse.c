#include "parse.h"

void		player_position_set(t_cub *v, int w, int h, int dir)
{
	v->player.x = (double)w;
	v->player.y = (double)h;
	if (dir == 'E')
		v->player.dir = 0.0;
	else if (dir == 'N')
		v->player.dir = M_PI / 2.0;
	else if (dir == 'W')
		v->player.dir = M_PI;
	else if (dir == 'S')
		v->player.dir = 3.0 * M_PI / 2.0;
	else
		v->player.dir = -1.0;
}

int		player_parse(t_cub *v)
{
	int		h;
	int		w;

	h = 0;
	while(v->map[h])
	{
		w = 0;
		while(v->map[h][w])
		{
			if ( ft_strchr("NSWE", v->map[h][w]) )
			{
				if (v->player.x == 0.0 || v->player.y == 0.0)
					player_position_set(v, w, h, v->map[h][w]);
				else
					return (error_message_print("Second player in the map!"));
			}
			++w;
		}
		++h;
	}
	return (0);
}
