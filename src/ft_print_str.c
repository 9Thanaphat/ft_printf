#include "libft.h"
#include "ft_printf.h"

int	ft_print_str(char *str)
{
	ft_putstr_fd(str, 1);
	return ((int)ft_strlen(str));
}
