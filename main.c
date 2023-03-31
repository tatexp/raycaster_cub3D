#include "cub3D.h"
#include "structure.h"

int		main(int ac, char **av)
{
	(void)av;
	//check
	t_cub	v;

	if (ac != 2)
		return (error_usage());
	// printf("debug 1 main\n");

	//init
	init_variables(&v);
	// printf("debug 2 main\n");

	//parse
	if (map_file_parse(av[1], &v) == -1)
		return (-1);

	// printf("debug 3 main\n");

	if (scene_draw(&v) == -1)
		return (-1);

	printf("width = %d, heigth = %d\n", v.screen.w, v.screen.h);
	printf("f.t = %d, f.r = %d, f.g = %d, f.b = %d\n", v.floor.t, v.floor.r, v.floor.g, v.floor.b);
	printf("c.t = %d, c.r = %d, c.g = %d, c.b = %d\n", v.ceiling.t, v.ceiling.r, v.ceiling.g, v.ceiling.b);
	printf("north = |%s|,\n south = |%s|,\n west = |%s|,\n east = |%s|,\n sprite = |%s|\n", v.texture_north, v.texture_south, v.texture_west, v.texture_east, v.texture_sprite);
	printf("maze.h = %d, maze.w = %d\n", v.maze.h, v.maze.w);
	printf("player.x = %f, player.y = %f, player.dir = %f\n", v.player.x, v.player.y, v.player.dir);

/*
	int i = 0;
	int y = 0;
	while (i < v.maze.h)
	{
		y = 0;
		while (v.map[i][y] != '\0')
		{
			
			printf("%c", v.map[i][y]);
			y++;
		}
		printf("\n");
		i++;
	}
	printf("map[0][0] = %c\n", v.map[10][0]);*/
	// while (1)
	// 	;
	return (0);
}
