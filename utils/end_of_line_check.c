#include "utils.h"

int end_of_line_check(char *line)
{
	line += whitespaces_skip(line);
	if (*line)
		return (error_message_print("Line has unwanted symbols at the end of line"));
	return (0);
}