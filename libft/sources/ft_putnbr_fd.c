#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int x;

	x = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		x = -n;
	}
	if (x >= 10)
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putnbr_fd(x % 10, fd);
	}
	else
		ft_putchar_fd(x + '0', fd);
}
