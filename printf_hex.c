#include "ft_printf.h"

int	ft_printf_to_Hex(unsigned int num, int count)
{
	char *base;
	base = "0123456789ABCDEF";
	if (num >= 16)
		count = ft_printf_to_Hex(num / 16, 0);
	if (num != 0)
	{
		ft_putchar_fd(base[num % 16], 1);
		count++;
	}
	if (num == 0)
		ft_putchar_fd('0', 1);
	return (count);
}
int	ft_printf_int_to_hex(unsigned int num, int count)
{
	char *base;
	base = "0123456789abcdef";
	if (num >= 16)
		count = ft_printf_int_to_hex(num / 16, 0);
	ft_putchar_fd(base[num % 16], 1);
	count++;
	return (count);
}

int ft_hexlen(unsigned int num)
{
	int l;
	l = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 16;
		l++;
	}
	return (l);
}


int ft_printf_hex_perc(unsigned int n, t_info *info, int perc)
{
	int count;

	count = 0;
	if (perc > 0)
		count = perc;
	/*
	if ((n > 0) && (info->spacd == 1 || info->showsign == 1))
	{
		if (info->showsign == 1)
			write(1, "+", 1);
		else if (info->spacd == 1)
			write(1, " ", 1);
	}
	else if (n < 0)
	{
			write (1, "-", 1);
			count++;
	}
	*/
	if (n != 0 && info->alt == 1)
	{
		if (info->spec == 'X')
			write(1, "0X", 2);
		else if (info->spec == 'x')
			write(1, "0x", 2);
	}
	while (perc-- > 0)
		write(1, "0", 1);
	if (info->spec == 'X')
			ft_printf_to_Hex(n, 1);
	else 
			ft_printf_int_to_hex(n, 1);
	count += ft_hexlen(n);
	return (count);
}
int	ft_printf_hex(unsigned int n, t_info *info)
{
	int count;
	int	len;
	int l;

	count = 0;
	// if (n > 0 && (info->spacd == 1 || info->showsign == 1))
	// 	info->width--;
	len = ft_hexlen(n);
	l = info->width - info->perc;
	if (len > info->perc)
		l = info->width - len;
	if (info->alt == 1 && n != 0)
	{
		l -= 2; // "0x"를 더해줌
		count += 2; 
	}
	if (info->left == 1)
		count += ft_printf_hex_perc(n, info, info->perc - len);
	count += ft_printf_width(l, info->pad);
	if (info->left == 0)
		count += ft_printf_hex_perc(n, info, info->perc - len);
	return (count);
}
