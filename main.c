#include "cub3D.h"
#include "structure.h"

int		main(int ac, char **av)
{
	(void)av;
	//check
	t_cub	v;

	if (ac != 2)
		return (error_usage());

	//parse
	map_file_parse(av[1], &v);

	//init
	//scene_draw
	
	// while (1)
	// 	;
	return 0;
}
