#include "libft.h"
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int	i;

	i = 0;
	va_start(args, str);
	while(str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
				ft_print_char(va_arg(args, char));
			else if (str[i + 1] == 's')
				ft_print_str(va_arg(args, char *));
			else if (str[i + 1] == 'p')
				ft_print_ptr(va_arg(args, unsigned long long));
			else if (str[i + 1] == 'd')
				ft_print_nbr(va_arg(args, int));
			else if (str[i + 1] == 'i')
				ft_print_int(va_arg(args, int));
			else if (str[i + 1] == 'u')
				ft_print_un_int(va_arg(args, unsigned int));
			else if (str[i + 1] == 'x')
				ft_print_lower_hex(va_arg(args, unsigned int));
			else if (str[i + 1] == 'X')
				ft_print_upper_hex(va_arg(args, unsigned int));
			else if (str[i + 1] == '%')
				ft_print_percent();
		}
		i++;
	}
}

int	main(void)
{
	return (0);
}
