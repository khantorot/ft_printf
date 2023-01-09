#include "../includes/ft_printf.h"

int		parse_width(char *str, int i, int k)
{
	int		l;
	char	*tmp;

	while ((str[i] < '1' || str[i] > '9') && i < k)
	{
		if (str[i] == '.')
			return (0);
		i++;
	}
	tmp = ft_strnew(21);
	l = 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '.')
	{
		tmp[l] = str[i];
		l++;
		i++;
	}
	tmp[l] = '\0';
	i = ft_atoi(tmp);
	free(tmp);
	return (i);
}

int		parse_precision(char *str, int k)
{
	int		i;
	char	*tmp;

	while (str[k] != '.')
	{
		k--;
		if (str[k] == '%')
			return (0);
	}
	tmp = ft_strnew(21);
	k++;
	if (str[k] == 'i' || str[k] == 'd' || str[k] == '0' ||
	str[k] == 'o' || str[k] == 'x' || str[k] == 'X' ||
	str[k] == 'p' || str[k] == 'u' || str[k] == 's')
		return (-1);
	i = 0;
	while (str[k] >= '0' && str[k] <= '9')
	{
		tmp[i] = str[k];
		i++;
		k++;
	}
	i = ft_atoi(tmp);
	free(tmp);
	return (i);
}
