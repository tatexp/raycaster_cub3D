#include "errors.h"

int error_usage(void)
{
	ft_putstr_fd("Error\nUsage: ./cub3d file_with_map.cub\n", 1);
	return 1;
}
