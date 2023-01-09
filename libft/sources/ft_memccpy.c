#include "libft.h"

void	*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;
	unsigned char		sb;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	sb = (unsigned char)c;
	while (n--)
	{
		*d++ = *s++;
		if (*(d - 1) == sb)
			return (d);
	}
	return (NULL);
}
