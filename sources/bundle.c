#include "../includes/ft_printf.h"

void	bundle(t_data *data, char *str)
{
	data->width = parse_width(str, data->i, data->k);
	data->precision = parse_precision(str, data->k);
	data->minus = parse_minus_flags(str, data->i);
	data->plus = parse_plus_flag(str, data->i);
	data->hash = parse_hashtag_flag(str, data->i);
	data->zero = parse_zero_flag(str, data->i);
	data->space = parse_space_flag(str, data->i);
}
