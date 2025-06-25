/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <akkim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 02:22:18 by akkim             #+#    #+#             */
/*   Updated: 2025/06/23 05:06:40 by akkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

# define PRT printf("   printf ["); ret = printf
# define ENDPRT printf("] %d\n", ret)

# define FRT ft_printf("ft_printf ["); ret = ft_printf
# define ENDFRT ft_printf("] %d\n", ret)

int main()
{
	int		ret;
	
	ret = 0;

		ft_printf("=======================\n");
		ft_printf("===       %%i        ===\n");
		ft_printf("=======================\n");
		FRT("%+ 5.5i", 3); ENDFRT;
		PRT("%+ 5.5i", 3); ENDPRT;
		FRT("%+ -5.5i", -1); ENDFRT;
		PRT("%+ -5.5i", -1); ENDPRT;
		FRT("%+0 5.5i", 3); ENDFRT;
		PRT("%+0 5.5i", 3); ENDPRT;
		FRT("%+0 -5.5i", -1); ENDFRT;
		PRT("%+0 -5.5i", -1); ENDPRT;
		FRT("%.5i", 3); ENDFRT;
		PRT("%.5i", 3); ENDPRT;
		FRT("%.5i", -1); ENDFRT;
		PRT("%.5i", -1); ENDPRT;
		FRT("%.5i", (int)-2147483648); ENDFRT;
		PRT("%.5i", (int)-2147483648); ENDPRT;
		FRT("%.5i", (int)2147483648); ENDFRT;
		PRT("%.5i", (int)2147483648); ENDPRT;
		FRT("%.5i", (int)2147483647); ENDFRT;
		PRT("%.5i", (int)2147483647); ENDPRT;
		FRT("%%  %  %"); ENDFRT;
		PRT("%%  %  %"); ENDPRT;
		FRT("%01.i", -1); ENDFRT;
		PRT("%01.i", -1); ENDPRT;
		FRT("%1.i", -1); ENDFRT;
		PRT("%1.i", -1); ENDPRT;
		FRT("%.i", 0); ENDFRT;
		PRT("%.i", 0); ENDPRT;
		FRT("%1.i", 0); ENDFRT;
		PRT("%1.i", 0); ENDPRT;
		FRT("%01.i", 0); ENDFRT;
		PRT("%01.i", 0); ENDPRT;
		FRT("%015.2d", 42000); ENDFRT;
		PRT("%015.2d", 42000); ENDPRT;
		FRT("%015.13d", 42000); ENDFRT;
		PRT("%015.13d", 42000); ENDPRT;
		FRT("%010.13d", 42000); ENDFRT;
		PRT("%010.13d", 42000); ENDPRT;
		FRT("%.d", 0); ENDFRT;
		PRT("%.d", 0); ENDPRT;
		FRT("%5.d", 0); ENDFRT;
		PRT("%5.d", 0); ENDPRT;
		FRT("%-.i", 0); ENDFRT;
		PRT("%-.i", 0); ENDPRT;
		FRT("%-1.i", 0); ENDFRT;
		PRT("%-1.i", 0); ENDPRT;
		FRT("%-01.i", 0); ENDFRT;
		PRT("%-01.i", 0); ENDPRT;
		FRT("%-015.2d", 42000); ENDFRT;
		PRT("%-015.2d", 42000); ENDPRT;
		FRT("%-015.13d", 42000); ENDFRT;
		PRT("%-015.13d", 42000); ENDPRT;
		FRT("%-010.13d", 42000); ENDFRT;
		PRT("%-010.13d", 42000); ENDPRT;
		FRT("%-.d", 0); ENDFRT;
		PRT("%-.d", 0); ENDPRT;
		FRT("%-5.d", 0); ENDFRT;
		PRT("%-5.d", 0); ENDPRT;
		ft_printf("\n");

}
