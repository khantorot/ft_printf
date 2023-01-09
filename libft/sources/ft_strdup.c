#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*res;
	size_t		i;

	i = 0;
	if (!(res = (char *)malloc(sizeof(*res) * ft_strlen(s1) + 1)))
		return (NULL);
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
