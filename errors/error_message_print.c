#include "errors.h"

int		error_message_print(char *msg)
{
	ft_putstr_fd("Error\n", 1);
	ft_putstr_fd(msg, 1);
	ft_putchar_fd('\n', 1);

	return (-1);
}
