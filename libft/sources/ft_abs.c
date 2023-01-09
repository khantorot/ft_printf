#include "libft.h"
#include <limits.h>

unsigned int	ft_abs(int value)
{
	if (value == INT_MIN)
		return ((unsigned int)INT_MAX + 1);
	return (value > 0 ? value : -value);
}
