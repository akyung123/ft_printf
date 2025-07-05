/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <akkim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 02:13:33 by akkim             #+#    #+#             */
/*   Updated: 2025/06/23 03:32:32 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_width(unsigned int width, int length, int pad)
{
	// 0 and ' '!
	int	count;
	count = 0;

	while (width > length)
	{
		if (pad == 0)
			ft_putchar_fd('0', 1);
		else
			ft_putchar_fd(' ', 1);
		width--;
		count++;
	}

	return (count);	
}
