/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_csp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <akkim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 02:15:34 by akkim             #+#    #+#             */
/*   Updated: 2025/06/23 05:04:57 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_char(char spce, t_info *info)
{
	int	count;
	count = 0;

	if (info->left == 1)
		ft_putchar_fd(spce, 1);
	count += ft_printf_width(info->width, 1, 1);
	if (info->left == 0)
		ft_putchar_fd(spce, 1);
	return (count + 1);
}

int	ft_printf_string(char *str, t_info *info)
{
	int	count;
	size_t len;
	count = 0;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	if (info->perc < ft_strlen(str))
		len = info->perc;
	if (info->left == 1)
		write(1, str, len);
	count += ft_printf_width(info->width, len, 1);
	if (info->left == 0)
		write(1, str, len);
	count += len;

	return (count);
}
