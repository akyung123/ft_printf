#include "ft_printf.h"

// 크기에 따라서 따로 저장해서 빼야할까...? 
// percision에 따라서 출력 크기 변경
// width는 빈공간 출력.

// int 변수 크기 재는 법
int ft_intlen(int num)
{
	int l;
	l = 0;
	if (num == 0)
		return (1);
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

int ft_unintlen(unsigned int num)
{
	int l;
	l = 0;
	if (num == 0)
		return (1);
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



void	ft_print_perc(int len, int pad)
{
	char c;
	if (pad == 0)
		c = '0';
	else 
		c = ' ';
	while(len-- > 0)
		write(1, c, 1);
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
	int w;
	char *spce;

	len = ft_intlen(n);
	l = info->perc;
	w = info->width;
	if (n < 0)
	{
		write(0, "-", 1);
		n *= -1;
		l++;
	}
	if (info->dot == 1 && (l < len || l == 0))
		l = len;
	// 만약, perc값이 존재하지 않는다면(예 : %.d, %10.d 등)
	if ((info->showsign == 1 || info ->spacd == 1) && n >= 0)
		l++;
	count = info->width + l;
	// len : 실제로 출력되는 숫자의 길이, 무조건 다 출력됨
	// 만약, perc가 len보다 작다면
	// count + 추가적으로 출력되는 크기
	// len - perc
	if (info->left == 1)
	{
		if (info->showsign == 1 || info->spacd == 1)
		{
			if (n > 0)
			{
				if(info->showsign == 1)
					write(1, "+", 1);
				if(info->spacd == 1)
					write(1, " ", 1);
			}
		}
		if (info->perc > len)
			ft_print_perc(l - len, info->pad);
		ft_putnbr_fd(n, 1);
	}
	count += ft_printf_width(info->width, l, info->pad);
	if (info->left == 0)
	{
		if (info->showsign == 1 || info->spacd == 1)
		{
			if (n > 0)
			{
				if(info->showsign == 1)
					write(1, "+", 1);
				if(info->spacd == 1)
					write(1, " ", 1);
			}
		}		
		if (info->perc > len)
			ft_print_perc(l - len, info->pad);
		ft_putnbr_fd(n, 1);
	}
	return (count);
}

void	ft_pritnf_unit(unsigned int n, t_info *info)
{
	int	count;
	int	len;
	int	l;

	count = 0;
	len = ft_unintlen(n);
	if (len < info->perc)
		l = info->perc;
	else 
		l = len;
	if (info->left == 1)
	{
		if (l > len)
			ft_print_perc(l - len, info->pad);
		ft_putunbr_fd(n, 1);
	}
	count += ft_printf_width(info->width, l, 1);
	if (info->left == 0)
	{
		if (l > len)
			ft_print_perc(l - len, info->pad);
		ft_putunbr_fd(n, 1);
	}
	return (count + 1);
}

