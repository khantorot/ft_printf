#include "../includes/ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list		list;
	t_data		*data;

	if (!(data = (t_data *)ft_memalloc(sizeof(t_data))))
		return (-1);
	init(data);
	va_start(list, format);
	data->result = build((char *)format, data, list);
	va_end(list);
	free(data);
	return (data->result);
}
