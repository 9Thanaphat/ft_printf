/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:21:08 by root              #+#    #+#             */
/*   Updated: 2024/09/25 20:41:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

static int ft_count_len(unsigned int num)
{
	int	i;

	i = 1;
	while (num >= 10)
	{
		i++;
		num = num / 10;
	}
	return(i);
}
char *ft_uitoa(unsigned int num)
{
	int	len;
	char *str;

	str = malloc((ft_count_len(num)) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	len = ft_count_len(num);
	str[len] = '\0';
	while (num != 0)
	{
		str[len - 1] = num % 10 + 48;
		num = num / 10;
		len--;
	}
	return (str);
}

int	ft_print_unsigned(unsigned int num)
{
	char	*str;
	int		len;

	len = 0;
	if (num == 0)
		ft_putchar_fd('0', 1);
	else
	{
		str = ft_uitoa(num);
		ft_putstr_fd(str, 1);
		free(str);
	}
	return (ft_count_len(num));
}
