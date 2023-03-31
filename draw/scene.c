#include "draw.h"
#include <stdio.h>

int		cub_mlx_init(t_cub *v)
{
	v->mlx = mlx_init();
	if (v->mlx == (void *)0)
		return (error_message_print("Error while initialize mlx!"));
	v->mlx_win = mlx_new_window(v->mlx, v->screen.w, v->screen.h, "CUB3D");
	if (v->mlx_win == (void *)0)
		return (error_message_print("Error while initialize mlx window!"));
	v->img.img = mlx_new_image(v->mlx, v->screen.w, v->screen.h);
	if (v->img.img == (void *)0)
		return (error_message_print("Error while initialize mlx image!"));
	return (0);
}

static int	calculate_ray(t_cub *v, t_ray *r, int w_counter)
{
	//v->plr.d = 0 -> 2M_PI
	r->cam_x = 2.0 * w_counter / (float)v->screen.w - 1; //part of the screen (from -1 to +1)
	r->x = sin(v->player.dir) + sin(v->player.dir + M_PI / 2.0) * r->fov * r->cam_x;
	r->y = cos(v->player.dir) + cos(v->player.dir + M_PI / 2.0) * r->fov * r->cam_x;
	//r->x & r->y calculate rays direction => from (0,0) to (r->x,r->y)
	if (w_counter % 100 == 0)
		printf("r->cam_x = %f\tr->x = %f\tr->y = %f\n",
			r->cam_x, r->x, r->y);
	r->map_x = (int)(v->player.x);
	r->map_y = (int)(v->player.y);
	r->delta_x = fabsf(1 / r->x);
	r->delta_y = fabsf(1 / r->y);
	r->hit = 0;
	r->step_x = 1;
	r->step_y = 1;
	if (r->x < 0)
	{
		r->step_x = -1;
		r->side_x = (v->player.x - r->map_x) * r->delta_x;
	}
	else
		r->side_x = (r->map_x + 1.0 - v->player.x) * r->delta_x;
	if (r->y < 0)
	{
		r->step_y = -1;
		r->side_y = (v->player.y - r->map_y) * r->delta_y;
	}
	else
		r->side_y = (r->map_y + 1.0 - v->player.y) * r->delta_y;
	return (0);
}
/*
static int	while_no_hit(t_cub *v, t_ray *r)
{
	while (r->hit == 0)
	{
		if (r->side_x < r->side_y)
		{
			r->side_x += r->delta_x;
			r->map_x += r->step_x;
			if (r->x < 0)
				r->side = 0;
			else
				r->side = 2;
		}
		else
		{
			r->side_y += r->delta_y;
			r->map_y += r->step_y;
			if (r->y < 0)
				r->side = 1;
			else
				r->side = 3;
		}
		if (v->map.arr[r->map_y][r->map_x] == '1')
			r->hit = 1;
	}
	return (0);
}*/

int		scene_draw(t_cub *v)
{
	if (cub_mlx_init(v) < 0)
		return (-1);
	

	t_ray	r;
	int		w_counter; //width counter (from 0 to screen.width)

	w_counter = 0;
	r.fov = 0.66;
	while (w_counter < v->screen.w)
	{
		calculate_ray(v, &r, w_counter);
	// 	while_no_hit(v, &r);
	// 	calculate_textures(v, &r);
	// 	draw_vertical(r, v, w);
	// 	v->scr.dist_to_wall[w] = r.wall_dist;
		++w_counter;
	}
	// sprite_texture(v, &r);
	// controls_move(v);
	// // if (v->bmp_image)
	// // 	draw_bmp(v);
	// // else
	// 	mlx_put_image_to_window(v->mlx, v->win, v->img.img, 0, 0);

	//mlx_loop(v->mlx);
	return (0);
}