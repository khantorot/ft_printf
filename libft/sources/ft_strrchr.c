#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *poiter;
	char symbol;

	poiter = (char *)s + ft_strlen(s);
	symbol = (char)c;
	while (poiter >= s)
	{
		if (*poiter == symbol)
			return (poiter);
		poiter--;
	}
	return (NULL);
}
