#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == src || !n)
		return (dst);
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}
