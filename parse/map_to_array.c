#include "parse.h"

void	map_fill_arr_elements(char *dst, const char *src, int dstsize, size_t srcsize)
{
	int i;

	i = 0;
	ft_memset(dst, ' ', dstsize); //fill with spaces (another symbols maybe using for map's elements)
	dst[dstsize] = '\0'; //put the end of string (all map lines will be the same length)
	while (srcsize--)	//if (srcsize < dstsize) uncopied elements will be spaces
	{
		dst[i] = src[i];
		i++;
	}
}

int		map_to_array(t_cub *v)
{
	int i;
	t_list *tmp;

	i = 0;
	tmp = v->maze.maze_lst;
	v->map = (char **)malloc(sizeof(char *) * (v->maze.h + 1));
	if (!v->map)
		return (error_message_print("MALLOC error in map_to_array"));
	v->map[v->maze.h] = NULL; 
	while (tmp)
	{
		v->map[i] = (char *)malloc( sizeof(char) * (v->maze.w + 1) );
		if (!v->map[i])
			return (error_message_print("MALLOC error in map_to_array"));
		map_fill_arr_elements(v->map[i], tmp->content, v->maze.w, ft_strlen(tmp->content));
		tmp = tmp->next;
		i++;
	}
	ft_lstclear(&v->maze.maze_lst, ft_simple_element_delete);
	v->maze.maze_lst = NULL;
	return (0);
}
