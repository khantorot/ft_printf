#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (c == s[i] ? ((char*)s + i) : (NULL));
}
