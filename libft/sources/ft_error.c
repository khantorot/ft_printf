#include "libft.h"

int		ft_error(char *s)
{
	ft_putendl_fd(s, 2);
	exit(1);
}
