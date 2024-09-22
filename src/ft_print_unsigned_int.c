#include "ft_printf.h"
#include <stdio.h>

static int ft_count_unsigned_int_len(unsigned int num)
{
	int	i;

	i = 0;
	while (num >= 10)
	{
		num = num / 10;
		i++;
	}
	if (num < 10)
		i++;
	return(i);
}
int	ft_print_unsigned_int(unsigned int num)
{
	ft_putnbr_fd(num, 1);
	return ((int)ft_strlen(ft_itoa(num)));
}

int main(void)
{
	printf("count len : %d \n",1234567890);
}
