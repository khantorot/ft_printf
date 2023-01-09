#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sum;
	int		i;
	int		start;

	i = 0;
	start = 0;
	if (s1 != NULL && s2 != NULL)
		if ((sum = (char*)malloc(sizeof(char) *
						(ft_strlen(s1) + ft_strlen(s2) + 1))) != NULL)
		{
			while (s1[i])
			{
				sum[i] = s1[i];
				i++;
			}
			while (s2[start])
			{
				sum[i] = s2[start];
				i++;
				start++;
			}
			sum[i] = '\0';
			return (sum);
		}
	return (NULL);
}
