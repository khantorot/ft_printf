#include "libft.h"

void	ft_free_arr(char **arr)
{
	size_t i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}
