/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vftprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <akkim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 02:14:28 by akkim             #+#    #+#             */
/*   Updated: 2025/06/23 03:57:01 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_vfprintf(const char *format, va_list arg)
{
    int	count;
	t_info info;
	
	count = 0;
    // Loop untill all format string are processed
    while (*format)
    {
        if (*format == '%')
        {
            format++;                     
            format = ft_parse_printf_format(format, &info);
            // format에 대한 인자처리
			count += ft_handle(arg, &info);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			format++;
		}
	}
	return (count);
}