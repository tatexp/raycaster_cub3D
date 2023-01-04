#include "parse.h"

int		delim_set(int c)
{
	if (c)
	{
		if (ft_isdigit(c))
			return (0); //no delimeter
		else
			return (c);
	}
	return (-1);
}

int		cub_atoi(char *str, int *param, int *delim, int is_last)
{
	long long result;
	int counter;

	result = 0;
	counter = whitespaces_skip(str);
	if (!ft_isdigit(str[counter]))
		return (-1);
	while (str[counter] >= '0' && str[counter] <= '9')
		result = result * 10 + str[counter++] - '0';
	counter += whitespaces_skip(str); //skip whitespaces after value
	//if delim is not set (== -1) then set delim
	if (*delim == -1)
		*delim = delim_set(str[counter]);
	if (str[counter] && *delim == str[counter])
		++counter;
	if (is_last)
	{
		counter += whitespaces_skip(str);
		if (str[counter])
			return (-1);
	}
	*param = (int)result;
	return (counter);
}
