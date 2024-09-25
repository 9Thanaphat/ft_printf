/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:21:24 by root              #+#    #+#             */
/*   Updated: 2024/09/25 19:26:50 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_print_int(int num)
{
	char	*str;
	int		len;

	str = ft_itoa(num);
	len = (int)ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
