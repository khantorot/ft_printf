#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *s1;
	const char *s2;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack != '\0')
	{
		s1 = haystack;
		s2 = needle;
		while (*s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
