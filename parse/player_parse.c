#include "parse.h"

int		player_parse(t_cub *v)
{
	t_list	*tmp;
	int		h;
	int		w;

	tmp = v->maze.maze_lst;
	h = 0;
	while(tmp)
	{
		w = 0;
		while(((char *)tmp->content)[w])
		{
			if ( ft_strchr("NSWE" ,((char *)tmp->content)[w]) )
			{

			}
			++w;
		}
		tmp = tmp->next;
		++h;
	}
	return (0);
}