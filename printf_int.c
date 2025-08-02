#include "ft_printf.h"

int ft_intlen(int num)
{
	int l;
	l = 0;
	if (num == 0)
		return (0);
	if (num == -2147483648)
		return (11);
	if(num < 0)
	{
		l++;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		l++;
	}
	return (l);
}

int ft_printf_perc(int n, t_info *info, int perc)
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
	*/
	if (info->pad != 0)
		count += ft_printf_pad(n, info);
	while (perc-- > 0)
		write(1, "0", 1);
	if (n != 0)
		ft_putnbr_fd(n, 1);
	count += ft_intlen(n);
	return (count);
}

int	ft_printf_width(int width, int pad)
{
	int count;

	if (width < 0)
		return (0);
	count = width;	
	if (pad == 0)
		while (width-- > 0)
			write(1, "0", 1);
	else
		while (width-- > 0)
			write(1, " ", 1);
	return (count);
}

int ft_printf_pad(int n, t_info *info)
{
	if (n < 0)
		return (write(1, "-", 1), 0);
	else if (n > 0 && (info->spacd == 1 || info->showsign == 1))
	{
		if (info->showsign == 1)
			return (write(1, "+", 1), 1);
		else if (info->spacd == 1)
			return (write(1, " ", 1), 1);
	}
	return (0);
}

int	ft_printf_int_width(int n, int width, int pad, t_info *info)
{	
	int count;

	count = width;	
	// if inf->left == 1, we print the number first
	// so, printf - 
	if (pad == 0)
		while (width-- > 0)
			write(1, "0", 1);
	else
		while (width-- > 0)
			write(1, " ", 1);
	return (count);
}

int	ft_printf_int(int n, t_info *info)
{
	int count;
	int	len;
	int l;

	count = 0;
	len = ft_intlen(n);
	if (n > 0 && (info->showsign == 1 || info->spacd == 1))
		len++;
	l = info->width - info->perc;
	if (len > info->perc)
		l = info->width - len;
	l < 0 ? l= 0 : l;
	len = ft_intlen(n) - (n < 0 ? 1 : 0);
	if (info->left == 1)
		count += ft_printf_perc(n, info, info->perc - len);
	if(info->pad == 0)
		count += ft_printf_pad(n, info);
	count += ft_printf_int_width(n, l, info->pad, info);
	if (info->left == 0)
		count += ft_printf_perc(n, info, info->perc - len);
	return (count);
}

