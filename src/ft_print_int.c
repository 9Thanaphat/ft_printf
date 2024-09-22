#include "libft.h"
#include "ft_printf.h"

int	ft_print_int(int num)
{
	ft_putnbr_fd(num, 1);
	return ((int)ft_strlen(ft_itoa(num)));
}
