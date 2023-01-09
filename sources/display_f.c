#include "../includes/ft_printf.h"

static void	print_f(t_data *data, long double type)
{
	print_width_f(data);
	if (data->plus == 1)
	{
		write(1, "+", 1);
		data->result++;
	}
	ft_putnbr_f(type, data);
}

static void	print_minus_f(t_data *data, long double type)
{
	if (data->plus == 1)
	{
		write(1, "+", 1);
		data->result++;
	}
	ft_putnbr_f(type, data);
	print_width_f(data);
}

static void	init_f(t_data *data)
{
	if (data->precision == -1)
		data->precision = 0;
	if (data->precision == 0)
		data->precision = 6;
	if (data->plus == 1)
		data->width--;
}

void		display_f(char *str, va_list list, t_data *data)
{
	long double type;

	if (change_type(str, data->k) == 0 || change_type(str, data->k) == 1)
		type = (double)va_arg(list, double);
	if (change_type(str, data->k) == 5)
		type = (long double)va_arg(list, long double);
	if (type == 0)
		write(1, "No", 2);
	data->len = get_f_len(type);
	data->len += data->precision + 1;
	data->result += data->len;
	init_f(data);
	if (data->minus == 1)
		print_minus_f(data, type);
	if (data->minus == 0)
		print_f(data, type);
}
