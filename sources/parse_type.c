#include "../includes/ft_printf.h"

int		parse_type(char *str, int i)
{
	if (str[i] == '\0')
		return (i);
	while (str[i] != 'c' && str[i] != 's' && str[i] != 'p' && str[i] != 'd'
	&& str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'x' &&
	str[i] != 'X' && str[i] != 'f' && str[i] != '%')
	{
		i++;
		if (str[i] == '\0' || str[i] == '%')
			break ;
	}
	return (i);
}
