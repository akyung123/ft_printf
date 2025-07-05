/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <akkim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 02:13:41 by akkim             #+#    #+#             */
/*   Updated: 2025/06/23 05:10:35 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char *ft_parse_printf_format(const char *format, t_info *info)
{
        // 구조체 초기화
	info->perc = 0;
        info->width = 0;
        info->alt = 0;
        info->spacd = 0;
        info->left = 0;
        info->showsign = 0;
        info->pad = 1;
	info->dot = 0;

        // flag 파싱
        do
        {
                switch(*format)
                {
                        case ' ':
                                info->spacd = 1;
                                continue;
                        case '#':
                                info->alt = 1;
                                continue;
                        case '-':
                                info->left = 1;
                                continue;
                        case '+':
                                info->showsign = 1;
                                continue;
                        case '0':
                                info->pad = 0;
                                continue;
                        default:
                                break;
                                //goto end_parse;
                }
                break;
        } while (*++format);
        // end_parse:
        if (info->left)
                info->pad = 1;
	if (info->showsign)
		info->spacd = 0;
        // width 파싱
        if (ft_isdigit(*format))
        {
                info->width = ft_atoi(format);
                while (ft_isdigit(*format))
                        format++;
        }
	// percision 파싱
	if (*format == '.')
	{
                format++;
		info->dot = 1;
		if (ft_isdigit(*format))
			info->perc = ft_atoi(format);
                        while (ft_isdigit(*format))
                                format++;
	}
	else
		info->perc = 0;		// "%.?" is treated like "%/0?"
	if (info->dot)
		info->pad = 1;
        // typer 체크
        info->spec = *format;
        format++;
        
        return (format);
}



