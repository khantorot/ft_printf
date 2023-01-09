#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 1;
	if (n == 0)
		return (0);
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (*p1 == *p2 && i < n)
	{
		p1++;
		p2++;
		i++;
	}
	return ((int)(*p1 - *p2));
}
