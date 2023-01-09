#include "../includes/ft_printf.h"

void		print_width_c(t_data *data)
{
	while (data->width > data->len)
	{
		write(1, " ", 1);
		data->width--;
		data->result++;
	}
}

static void	print_minus_c(t_data *data, char c)
{
	ft_putchar(c);
	print_width_c(data);
}

static void	print_c(t_data *data, char c)
{
	if (data->width > data->len)
		print_width_c(data);
	ft_putchar(c);
}

void		display_c(va_list list, t_data *data)
{
	int		type;
	char	c;

	type = (unsigned char)va_arg(list, int);
	c = type;
	data->len = 1;
	data->result += 1;
	if (data->minus == 1)
		print_minus_c(data, c);
	else
		print_c(data, c);
}
