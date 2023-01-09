#include "libft.h"

void	ft_strclr(char *s)
{
	char *p;

	p = s;
	while (p && *p)
		*p++ = '\0';
}
