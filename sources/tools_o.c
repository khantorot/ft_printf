#include "../includes/ft_printf.h"

void			init_o(t_data *data)
{
	if (data->hash == 1 && ft_atoi(data->data) != 0)
		data->data = ft_strjoin("0", data->data);
	data->len = ft_strlen(data->data);
	data->difference = data->precision - data->len;
}

long long		get_o_type(t_data *data, char *str, va_list list)
{
	unsigned long long type;

	if (change_type(str, data->k) == 1)
		type = (unsigned long int)va_arg(list, unsigned long long);
	else if (change_type(str, data->k) == 2)
		type = (unsigned char)va_arg(list, unsigned long long);
	else if (change_type(str, data->k) == 3)
		type = (unsigned short int)va_arg(list, unsigned long long);
	else
		type = (unsigned long long)va_arg(list, unsigned long long);
	return (type);
}

void			reinit_type_o(unsigned long long i, t_data *data)
{
	unsigned long long	l;
	unsigned long long	k;
	// unsigned long long	b;
	unsigned long long	j;
	int					f;

	// b = 0;
	l = 0;
	k = i;
	data->data = ft_strnew(30);
	while (k > 8)
	{
		f = 1;
		k = i;
		i = i / 8;
		j = k - i * 8;
		data->data[l] = j + '0';
		l++;
	}
	data->data = ft_strrev(data->data);
	if (f == 1)
		return ;
	else
		data->data[0] = data->type + '0';
}
