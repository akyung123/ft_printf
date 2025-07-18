/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 18:25:48 by akkim             #+#    #+#             */
/*   Updated: 2025/04/08 18:27:46 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num;

	if (n == -2147483648)
	{
		write(fd, "2147483648", 10);
		return ;
	}
	else if (n < 0)
		n *= -1;
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		num = '0' + n;
		write(fd, &num, 1);
	}
}

void	ft_putunbr_fd(unsigned int n, int fd)
{
	char	num;

//	if (n == 0)
//		return ;
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		num = '0' + n;
		write(fd, &num, 1);
	}
}

