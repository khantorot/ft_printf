#include "../includes/ft_printf.h"

void	init(t_data *data)
{
	data->hash = 0;
	data->minus = 0;
	data->plus = 0;
	data->space = 0;
	data->zero = 0;
	data->width = 0;
	data->result = 0;
	data->i = 0;
	data->data = NULL;
}
