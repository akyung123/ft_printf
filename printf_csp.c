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
	count += ft_printf_width(info->width-1, 1);
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
		if (info->dot == 0 || info->perc >= 6)
			str = "(null)";
	len = ft_strlen(str);
	if (info->dot == 1 && info->perc < len)
		len = info->perc;
	if (info->left == 1)
		write(1, str, len);
	count += ft_printf_width(info->width - len, info->pad);
	if (info->left == 0)
		write(1, str, len);
	count += len;

	return (count);
}
// 정수를 16진수로 바꿔서 출력 int to hex
int	ft_printf_to_hex(unsigned long long num, int count)
{
	char *base;
	base = "0123456789abcdef";
	if (num >= 16)
		count = ft_printf_to_hex(num / 16, 0);
	ft_putchar_fd(base[num % 16], 1);
	count++;
	return (count);
}

int ft_printf_addr(unsigned long long num)
{
	int count;
	int l;
	unsigned long long n;

	count = 0;
	if (num == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	l = ft_printf_to_hex(num, count);
	count += l + 2; // "0x"를 더해줌
	return (count);
}

// unsigned long long으로 튀어나오면 됨!
int	ft_printf_pointer(void *addr, t_info *info)
{
	int count;
	int l;
	unsigned long long num;

	count = 0;
	num = (unsigned long long)addr;
	l = info->width - 14;
	if (num == 0)
		l = info->width - 5; // "(nil)"의 길이
	if (info->left == 1)
		count += ft_printf_addr(num);
	count += ft_printf_width(l, info->pad);
	if (info->left == 0)
		count += ft_printf_addr(num);
	return (count);
}
