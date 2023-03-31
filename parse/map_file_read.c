#include "parse.h"

//структура файла с каротой следующая:
//	настройки
//	карта(лабиринт)

int		map_file_read(int fd, t_cub *v)
{
	int		read_lines_result;
	int		map_starts;
	char	*line;

	//флаг, обознающий начало карты в файле с картой
	map_starts = 0;
	//читаем файл с картой построчно
	while ((read_lines_result = get_next_line(fd, &line)) > 0)
	{
		if (!line)
			break;
		//printf("line = %s\n", line);
		//проверяем значение флага и
		//если карта не начилась проверяем не является ли первый символ (после пробелов) цифрой
		//если цифра, значит началась карта - устанавливаем флаг
		if (map_starts != 1 && ft_isdigit(line[whitespaces_skip(line)]) == 1) //attention! no parameters name starts with digit
			map_starts = 1;
		//если карта началась, считываем ее в односвязный список
		if (map_starts == 1)
		{
			if (map_add_to_lst(v, line) == -1)
				return (-1);
		}
		//иначе считываем 
		else
		{
			if (map_settings_parse(line, v) == -1)
				return (-1);
		}
		free(line);
		line = NULL;
	}
	if (line)
		free(line);
	if (read_lines_result == -1)
		return (error_message_print("Error while reading map's file"));
	return (0);
}
