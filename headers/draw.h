#ifndef DRAW_H
# define DRAW_H

# include "mlx.h"
# include "structure.h"
# include "errors.h"

int		scene_draw(t_cub *v);
void	my_mlx_pixel_put(t_img *img, int x, int y, int color);
int		create_trgb(int t, int r, int g, int b);

#endif