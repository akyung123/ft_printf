#include "ft_printf.h"

// 크기에 따라서 따로 저장해서 빼야할까...? 
// percision에 따라서 출력 크기 변경
// width는 빈공간 출력.

// int 변수 크기 재는 법
 
int ft_unintlen(unsigned int num)
{
	int l;
	l = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 10;
		l++;
	}
	return (l);
}

int ft_printf_u_perc(unsigned int n, int perc)
{
	int count;
	count = 0;
	if (perc > 0)
		count = perc;
	while (perc-- > 0)
		write(1, "0", 1);
	ft_putunbr_fd(n, 1);
	count += ft_unintlen(n);
	return (count);
}

int ft_printf_u_width(int width, int pad)
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

int	ft_printf_unit(unsigned int n, t_info *info)
{
	int	count;
	int	len;
	int	l;

	count = 0;
	len = ft_unintlen(n);
	l = info->width - info->perc;
	if (len > info->perc)
		l = info->width - len;
	if (info->left == 1)
		count += ft_printf_u_perc(n, info->perc - len);
	count += ft_printf_u_width(l, info->pad);
	if (info->left == 0)
		count += ft_printf_u_perc(n, info->perc - len);
	return (count);
}
