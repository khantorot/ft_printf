#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/includes/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
// # include <stdio.h>

typedef struct		s_data
{
	char			*data;
	long long		type;
	int				result;
	int				i;
	int				k;
	int				k2;
	int				len;
	int				width;
	int				minus;
	int				plus;
	int				hash;
	int				zero;
	int				space;
	int				precision;
	int				difference;
}					t_data;

int					ft_printf(const char *format, ...);
void				init(t_data *data);
int					build(char *str, t_data *data, va_list list);
void				bundle(t_data *data, char *str);
void				display(t_data *data, char *str, va_list list);

int					parse_percent(char *str, int i, t_data *data);
int					parse_type(char *str, int i);
int					parse_width(char *str, int i, int k);
int					parse_precision(char *str, int k);
int					parse_hashtag_flag(char *str, int i);
int					parse_space_flag(char *str, int i);
int					parse_zero_flag(char *str, int i);
int					parse_plus_flag(char *str, int i);
int					parse_minus_flags(char *str, int i);

int					display_percent(t_data *data);
void				display_int(char *str, va_list list, t_data *data);
void				init_int(t_data *data, long long type);
void				reinit_type_int(t_data *data, long long type);
void				precision_width(t_data *data);
void				get_spec_width(t_data *data, long long type);
void				display_o(char *str, va_list list, t_data *data);
void				init_o(t_data *data);
long long			get_o_type(t_data *data, char *str, va_list list);
void				reinit_type_o(unsigned long long i, t_data *data);
void				display_u(char *str, va_list list, t_data *data);
void				display_x(char *str, va_list list, t_data *data);
char				*get_x(unsigned long long i);
void				display_capital_x(char *str, va_list list, t_data *data);
unsigned long long	capital_x_type(va_list list, char *str, t_data *data);
void				capital_x(t_data *data, long long type);
void				display_c(va_list list, t_data *data);
void				print_width_c(t_data *data);
void				display_s(va_list list, t_data *data);
void				print_s(t_data *data);
void				print_minus_s(t_data *data);
void				display_p(va_list list, t_data *data);
void				print_p_sequel(t_data *data, unsigned long long type);
void				print_p_s(t_data *data);
void				display_f(char *str, va_list list, t_data *data);
void				print_width_f(t_data *data);
void				ft_putnbr_f(long double type, t_data *data);
int					get_f_len(long double type);

int					revise_conversion(char *str, int k);
int					change_type(char *str, int k);
void				get_width(t_data *data);
void				get_precision(t_data *data);
char				symbol_type_x(int i);
char				*ft_itoa_unsinged(unsigned long long n);
void				ft_putnbr_u(unsigned long long n);
char				*ft_strrev(char *str);

#endif
