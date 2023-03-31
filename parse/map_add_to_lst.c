#include "parse.h"

int		map_add_to_lst(t_cub *v, char *line)
{
	char	*data;

	data = ft_strdup(line);
	if (!data)
		return (error_message_print("STRDUP error in map_add_to_lst file"));
	ft_lstadd_back(&v->maze.maze_lst, ft_lstnew((void *)data));
	//увеличиваем счетчик высоты карты
	++v->maze.h;
	//находим ширину карты - запоминаем максимальное число
	if ((int)ft_strlen(line) > v->maze.w)
		v->maze.w = ft_strlen(line);
	return (0);
}
