#include "../includes/ft_printf.h"

static void	print_p(t_data *data)
{
	while (data->width > 3)
	{
		write(1, " ", 1);
		data->width--;
		data->result++;
	}
	ft_putstr(data->data);
	data->result += 3;
	while (data->precision > 1)
	{
		write(1, "0", 1);
		data->precision--;
		data->result++;
	}
}

static void	print_minus_p(t_data *data)
{
	ft_putstr(data->data);
	data->result += 3;
	while (data->precision > 1)
	{
		write(1, "0", 1);
		data->precision--;
		data->result++;
	}
	while (data->width > 3)
	{
		write(1, " ", 1);
		data->width--;
		data->result++;
	}
}

void		display_p(va_list list, t_data *data)
{
	unsigned long long	type;

	type = va_arg(list, unsigned long long);
	if (type == 0 && data->precision != -1)
	{
		data->data = ft_strnew(3);
		data->data = ft_strcpy(data->data, "0x0");
		if (data->minus == 0)
			print_p(data);
		else
			print_minus_p(data);
		free(data->data);
		return ;
	}
	else if (data->precision == -1)
	{
		data->data = ft_strnew(2);
		data->data = ft_strcpy(data->data, "0x");
	}
	else
		print_p_sequel(data, type);
	print_p_s(data);
	free(data->data);
}
