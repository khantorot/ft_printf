#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *p;
	unsigned char s;

	p = (unsigned char *)b;
	s = (unsigned char)c;
	while (len--)
		*p++ = s;
	return (b);
}
