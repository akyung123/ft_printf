/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <akkim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 02:13:45 by akkim             #+#    #+#             */
/*   Updated: 2025/06/23 02:19:57 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
        va_list arg;
        int done;

        va_start(arg, format);
        done = ft_vfprintf(format, arg);
        
        va_end(arg);
        return done;
}
