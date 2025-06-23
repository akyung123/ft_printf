/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <akkim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 02:13:36 by akkim             #+#    #+#             */
/*   Updated: 2025/06/23 04:48:53 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle(va_list arg, t_info *info)
{
	//format인자별로 각 함수로 파싱
	// Info->spec별로 따로 함수 구현
	int	count;
	count = 0;

	if (info->spec == 'c')	// char
		count = ft_printf_char((char)va_arg(arg, int), info);		
	else if (info->spec == 's')	// string (char *)
		count = ft_printf_string(va_arg(arg, char *), info);
	else if (info->spec == 'p')	// void * pointer
		count = ft_printf_pointer(va_arg(arg, void *), info);
	else if (info->spec == 'd' || info->spec == 'i')	// int, base on 10
		count = ft_printf_int(va_arg(arg, int), info);
//	else if (info->spec == 'u')
//		count = ft_pritnf_unit(va_arg(arg, unsigned int), info);
//	else if (info->spec == 'x' || info->spec == 'X')	// hex 10->16
//		count = ft_printf_hex(va_arg(arg, unsigned int), info);
	else if (info->spec == '%')
	{
		count++;
		ft_putstr_fd("%", 1);
	}
	return (count);
}
