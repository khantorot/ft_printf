#include "libft.h"

t_bool		ft_has_prefix(const char *str, int base)
{
	size_t	i;

	i = 0;
	if (base == 2 || base == 8 || base == 16)
	{
		if (str[i++] != '0')
			return (false);
		if (base == 2 && (str[i] == 'b' || str[i] == 'B'))
			return (true);
		if (base == 16 && (str[i] == 'x' || str[i] == 'X'))
			return (true);
		if (base == 8)
			return (true);
	}
	return (false);
}

t_bool		ft_isnumber(char *str, int base)
{
	size_t		i;
	size_t		digits;

	i = 0;
	digits = 0;
	while (ft_isspace(str[i]))
		i++;
	if (base != 10 && !ft_has_prefix(&str[i], base))
		return (false);
	if (base == 2 || base == 16)
		i += 2;
	else if (base == 8)
		i++;
	else if (base == 10 && (str[i] == '-' || str[i] == '+'))
		i++;
	while (ft_isdigit_base(str[i], base) >= 0)
	{
		i++;
		digits++;
	}
	return ((!str[i] && digits) ? true : false);
}
