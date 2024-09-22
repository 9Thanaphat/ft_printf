#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_check_format(va_list args, const char format);
int	ft_print_char(char c);
int	ft_print_int(int num);
int	ft_print_int(int num);

#endif
