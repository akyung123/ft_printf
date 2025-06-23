#include "ft_printf.h"

// 크기에 따라서 따로 저장해서 빼야할까...? 
// percision에 따라서 출력 크기 변경
// width는 빈공간 출력.

// int 변수 크기 재는 법
int ft_intlen(int num)
{
	int l;
	l = 0;

	while (num > 0)
	{
		num /= 10;
		l++;
	}
	return (l);
}

void	ft_print_perc(int len)
{
	while(len-- > 0)
		write(1, "0", 1);
}
int	ft_printf_int(int n, t_info *info)
{
	int	count;
	int len;
	char *spce;

	count = 0;
	len = ft_intlen(n);
	if (info->left == 1)
	{
		if (info->perc > len)
			ft_print_perc(info->perc - len);
		ft_putnbr_fd(n, 1);
	}
	count += ft_printf_width(info->width, info->perc, 1);
	if (info->left == 0)
	{
		if (info->perc > len)
			ft_print_perc(info->perc - len);
		ft_putnbr_fd(n, 1);
	}
	return (count + info->width);
}

void	ft_pritnf_unit(int num, t_info info)
{
	
}