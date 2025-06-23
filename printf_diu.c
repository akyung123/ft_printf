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

// - , +, ' ', 0 flag 고려하기
// + : 양수 +, 음수 - 표시
// ' ' : 양수 ' '. 음수 - 표시
// 0 : width 남는 공간 0으로 채우기
int	ft_printf_int(int n, t_info *info)
{
	int	count;
	int len;
	int l;
	char *spce;

	count = 0;
	len = ft_intlen(n);
	l = info->perc;
	if (info->showsign == 1 || info ->spacd == 1)
		l++;
	if (info->left == 1)
	{
		if (info->showsign == 1 || info->spacd == 1)
		{
			if( n < 0)
				write(1, "-", 1);
			if (info->showsign ==1 && n > 0)
				write(1, "+", 1);
		}
		if (info->perc > len)
			ft_print_perc(info->perc - len);
		ft_putnbr_fd(n, 1);
	}
	count += ft_printf_width(info->width, l, info->pad);
	if (info->left == 0)
	{
		if (info->showsign == 1 || info->spacd == 1)
		{
			if( n < 0)
				write(1, "-", 1);
			if (info->showsign ==1 && n > 0)
				write(1, "+", 1);
			if (info->spacd == 1 && n > 0)
				write(1, " ", 1);			
		}
		if (info->perc > len)
			ft_print_perc(info->perc - len);
		ft_putnbr_fd(n, 1);
	}
	return (count + info->width);
}

void	ft_pritnf_unit(int num, t_info info)
{

}