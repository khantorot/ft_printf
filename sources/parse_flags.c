#include "../includes/ft_printf.h"

int		parse_hashtag_flag(char *str, int i)
{
	while (str[i] == '-' || str[i] == '+' || str[i] == ' '
	|| str[i] == '#' || str[i] == '0')
	{
		if (str[i] == '#')
			return (1);
		i++;
	}
	return (0);
}

int		parse_space_flag(char *str, int i)
{
	while (str[i] == '-' || str[i] == '+' || str[i] == ' '
	|| str[i] == '#' || str[i] == '0')
	{
		if (str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

int		parse_zero_flag(char *str, int i)
{
	while (str[i] == '-' || str[i] == '+' || str[i] == ' '
	|| str[i] == '#' || str[i] == '0')
	{
		if (str[i] == '0')
			return (1);
		i++;
	}
	return (0);
}

int		parse_plus_flag(char *str, int i)
{
	while (str[i] == '-' || str[i] == '+' || str[i] == ' '
	|| str[i] == '#' || str[i] == '0')
	{
		if (str[i] == '+')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int		parse_minus_flags(char *str, int i)
{
	while (str[i] == '-' || str[i] == '+' || str[i] == ' '
	|| str[i] == '#' || str[i] == '0')
	{
		if (str[i] == '-')
			return (1);
		i++;
	}
	return (0);
}
