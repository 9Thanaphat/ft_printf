#include "ft_printf.h"
#include "libft.h"

static int	ft_count_hex_len(unsigned int num)
{
	int	i;

	i = 0;
	while (num >= 16)
	{
		i++;
		num = num / 16;
	}
	return(i);
}

void ft_put_hex(unsigned int num)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16);
		ft_put_hex(num % 16);
	}
	else
	{
		if (num < 10)
			ft_putchar_fd(num + 48, 1);
		else
			ft_putchar_fd((num - 10) + 65, 1);
	}
}
int	ft_print_hex_lower(unsigned int num)
{
	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		return  (1);
	}
	else
		ft_put_hex(num);
	return (ft_count_hex_len(num));
}
