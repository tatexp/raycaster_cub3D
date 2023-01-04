#include "cub3D.h"
#include "structure.h"

int		main(int ac, char **av)
{
	(void)av;
	//check
	t_cub	v;

	if (ac != 2)
		return (error_usage());

	//init
	init_variables(&v);

	//parse
	map_file_parse(av[1], &v);

	printf("width = %d, heigth = %d\n", v.screen.w, v.screen.h);
	printf("f.t = %d, f.r = %d, f.g = %d, f.b = %d\n", v.floor.t, v.floor.r, v.floor.g, v.floor.b);
	printf("c.t = %d, c.r = %d, c.g = %d, c.b = %d\n", v.ceiling.t, v.ceiling.r, v.ceiling.g, v.ceiling.b);
	//scene_draw
	
	// while (1)
	// 	;
	return (0);
}
