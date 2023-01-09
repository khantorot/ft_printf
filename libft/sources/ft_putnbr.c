#include "libft.h"

void			ft_putnbr(int nb)
{
	unsigned n;

	if (nb < 0)
		ft_putchar('-');
	n = (unsigned)ft_check(nb);
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}
