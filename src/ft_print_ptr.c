/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:21:47 by root              #+#    #+#             */
/*   Updated: 2024/09/25 19:17:34 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_ptr_len(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_ptr(unsigned long long num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + 48), 1);
		else
			ft_putchar_fd((num - 10 + 97), 1);
	}
}

int	ft_print_ptr(unsigned long long num)
{
	int	len;

	len = 0;
	if (num == 0)
		len += write(1, "(nil)", 5);
	else
	{
		len += write(1, "0x", 2);
		ft_put_ptr(num);
		len += ft_ptr_len(num);
	}
	return (len);
}
