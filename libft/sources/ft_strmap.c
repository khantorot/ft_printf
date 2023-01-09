#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*p1;
	char	*p2;
	char	*res;

	if (!s || !(res = ft_memalloc((size_t)ft_strlen((char*)s) + 1)))
		return (NULL);
	p1 = (char *)s;
	p2 = res;
	while (*p1)
		*p2++ = f(*(p1++));
	return (res);
}
