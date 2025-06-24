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
		ft_printf("===       %%u        ===\n");
		ft_printf("=======================\n");
		FRT("%6.5u", 0); ENDFRT;
		PRT("%6.5u", 0); ENDPRT;
		FRT("%.5u", 10); ENDFRT;
		PRT("%.5u", 10); ENDPRT;
		FRT("%3.u", 0); ENDFRT;
		PRT("%3.u", 0); ENDPRT;
		FRT("%.u", 0); ENDFRT;
		PRT("%.u", 0); ENDPRT;
		FRT("%.u", 3); ENDFRT;
		PRT("%.u", 3); ENDPRT;
		FRT("%-.5u", 10); ENDFRT;
		PRT("%-.5u", 10); ENDPRT;
		FRT("%-8.5u", 10); ENDFRT;
		PRT("%-8.5u", 10); ENDPRT;
		FRT("%.5u", (unsigned int)2147483648); ENDFRT;
		PRT("%.5u", (unsigned int)2147483648); ENDPRT;
		FRT("%.5u", -1); ENDFRT;
		PRT("%.5u", -1); ENDPRT;
		FRT("%.5u", 3); ENDFRT;
		PRT("%.5u", 3); ENDPRT;
		FRT("%.5u", (unsigned int)4294967295); ENDFRT;
		PRT("%.5u", (unsigned int)4294967295); ENDPRT;

		FRT("%.5u", (unsigned int)-2147483648); ENDFRT;
		PRT("%.5u", (unsigned int)-2147483648); ENDPRT;
		FRT("%.5u", (unsigned int)2147483647); ENDFRT;
		PRT("%.5u", (unsigned int)2147483647); ENDPRT;
		FRT("%5.5u", 3); ENDFRT;
		PRT("%5.5u", 3); ENDPRT;
		FRT("%-5.5u", -1); ENDFRT;
		PRT("%-5.5u", -1); ENDPRT;
		FRT("%05.5u", 3); ENDFRT;
		PRT("%05.5u", 3); ENDPRT;
		FRT("%.5u", 3); ENDFRT;
		PRT("%.5u", 3); ENDPRT;
		FRT("%7.5u", 3); ENDFRT;
		PRT("%7.5u", 3); ENDPRT;
		FRT("%2.5u", 3); ENDFRT;
		PRT("%2.5u", 3); ENDPRT;
		FRT("%.5u", -1); ENDFRT;
		PRT("%.5u", -1); ENDPRT;

		FRT("%01.u", -1); ENDFRT;
		PRT("%01.u", -1); ENDPRT;
		FRT("%1.u", -1); ENDFRT;
		PRT("%1.u", -1); ENDPRT;
		FRT("%.u", 0); ENDFRT;
		PRT("%.u", 0); ENDPRT;
		FRT("%1.u", 0); ENDFRT;
		PRT("%1.u", 0); ENDPRT;
		FRT("%01.u", 0); ENDFRT;
		PRT("%01.u", 0); ENDPRT;
		FRT("%015.2u", 42000); ENDFRT;
		PRT("%015.2u", 42000); ENDPRT;
		FRT("%015.13u", 42000); ENDFRT;
		PRT("%015.13u", 42000); ENDPRT;
		FRT("%010.13u", 42000); ENDFRT;
		PRT("%010.13u", 42000); ENDPRT;
		FRT("%.u", 0); ENDFRT;
		PRT("%.u", 0); ENDPRT;
		FRT("%5.u", 0); ENDFRT;
		PRT("%5.u", 0); ENDPRT;
		FRT("%-.u", 0); ENDFRT;
		PRT("%-.u", 0); ENDPRT;
		FRT("%-1.u", 0); ENDFRT;
		PRT("%-1.u", 0); ENDPRT;
		FRT("%-01.u", 0); ENDFRT;
		PRT("%-01.u", 0); ENDPRT;
		FRT("%-015.2u", 42000); ENDFRT;
		PRT("%-015.2u", 42000); ENDPRT;
		FRT("%-015.13u", 42000); ENDFRT;
		PRT("%-015.13u", 42000); ENDPRT;
		FRT("%-010.13u", 42000); ENDFRT;
		PRT("%-010.13u", 42000); ENDPRT;
		FRT("%-.u", 0); ENDFRT;
		PRT("%-.u", 0); ENDPRT;
		FRT("%-5.u", 0); ENDFRT;
		PRT("%-5.u", 0); ENDPRT;
		FRT("%010u", 42); ENDFRT;
		PRT("%010u", 42); ENDPRT;
		FRT("%2u", 1); ENDFRT;
		PRT("%2u", 1); ENDPRT;
		FRT("%.2u", 1); ENDFRT;
		PRT("%.2u", 1); ENDPRT;
		ft_printf("\n");

}
