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

int main(int argc, char *argv[])
{
	int		ret;
	
	ret = 0;
	
	//  ft_printf("=======================\n");
	//  ft_printf("===       %%c        ===\n");
	//  ft_printf("=======================\n");
	//  FRT("%c", 'a'); ENDFRT;
	//  PRT("%c", 'a'); ENDPRT;
	//  ft_printf("\n");

	//  ft_printf("=======================\n");
	//  ft_printf("===       %%s        ===\n");
	//  ft_printf("=======================\n");
	//  FRT("%s", "Hello I'm yuna."); ENDFRT;
	//  PRT("%s", "Hello I'm yuna."); ENDPRT;
	//  FRT("%s", "halp me"); ENDFRT;
	//  PRT("%s", "halp me"); ENDPRT;
	//  FRT("this is %s", "halp me"); ENDFRT;
	//  PRT("this is %s", "halp me"); ENDPRT;
	//  FRT("%s", (char *)0); ENDFRT;
	//  PRT("%s", (char *)0); ENDPRT;
	//  ft_printf("\n");

	int	a;
	a = 2;
	 ft_printf("=======================\n");
	 ft_printf("===       %%p        ===\n");
	 ft_printf("=======================\n");
	 FRT("%p", &a); ENDFRT;
	 PRT("%p", &a); ENDPRT;
	 FRT("%p", (void *)-1); ENDFRT;
	 PRT("%p", (void *)-1); ENDPRT;
	 FRT("%p", (void *)0); ENDFRT;
	 PRT("%p", (void *)0); ENDPRT;
	 ft_printf("\n");

	//  ft_printf("=======================\n");
	//  ft_printf("===       %%d        ===\n");
	//  ft_printf("=======================\n");
	//  FRT("%d", 3); ENDFRT;
	//  PRT("%d", 3); ENDPRT;
	//  FRT("%d", -1); ENDFRT;
	//  PRT("%d", -1); ENDPRT;
	//  FRT("%d", -124); ENDFRT;
	//  PRT("%d", -124); ENDPRT;
	//  FRT("%d", (int)-2147483648); ENDFRT;
	//  PRT("%d", (int)-2147483648); ENDPRT;
	//  ft_printf("\n");

	//  ft_printf("=======================\n");
	//  ft_printf("===       %%i        ===\n");
	//  ft_printf("=======================\n");
	//  FRT("%i", 3); ENDFRT;
	//  PRT("%i", 3); ENDPRT;
	//  FRT("%i", -1); ENDFRT;
	//  PRT("%i", -1); ENDPRT;
	//  FRT("%i", (int)-2147483648); ENDFRT;
	//  PRT("%i", (int)-2147483648); ENDPRT;
	//  FRT("%i", (int)2147483648); ENDFRT;
	//  PRT("%i", (int)2147483648); ENDPRT;
	//  FRT("%i", (int)2147483647); ENDFRT;
	//  PRT("%i", (int)2147483647); ENDPRT;
	//  ft_printf("\n");

	 ft_printf("=======================\n");
	 ft_printf("===       %%u        ===\n");
	 ft_printf("=======================\n");
	 FRT("%u", 0); ENDFRT;
	 PRT("%u", 0); ENDPRT;
	 FRT("%u", (unsigned int)2147483648); ENDFRT;
	 PRT("%u", (unsigned int)2147483648); ENDPRT;
	 FRT("%u", -1); ENDFRT;
	 PRT("%u", -1); ENDPRT;
	 FRT("%u", (unsigned int)4294967295); ENDFRT;
	 PRT("%u", (unsigned int)4294967295); ENDPRT;
	 ft_printf("\n");

	 ft_printf("=======================\n");
	 ft_printf("===       %%x        ===\n");
	 ft_printf("=======================\n");
	 FRT("%x", 0); ENDFRT;
	 PRT("%x", 0); ENDPRT;
	 FRT("%x", -42); ENDFRT;
	 PRT("%x", -42); ENDPRT;
	 FRT("%x", -1); ENDFRT;
	 PRT("%x", -1); ENDPRT;
	 ft_printf("\n");

	 ft_printf("=======================\n");
	 ft_printf("===       %%X        ===\n");
	 ft_printf("=======================\n");
	 FRT("%X", 0); ENDFRT;
	 PRT("%X", 0); ENDPRT;
	 FRT("%X", -42); ENDFRT;
	 PRT("%X", -42); ENDPRT;
	 FRT("%X", -1); ENDFRT;
	 PRT("%X", -1); ENDPRT;
	 ft_printf("\n");


		 ft_printf("=================================\n");

		 ft_printf("      field width and - flag\n");

		//  ft_printf("=======================\n");
		//  ft_printf("===       %%c        ===\n");
		//  ft_printf("=======================\n");
		//  FRT("%3c", 'z'); ENDFRT;
		//  PRT("%3c", 'z'); ENDPRT;
		//  FRT("%-2c", 's'); ENDFRT;
		//  PRT("%-2c", 's'); ENDPRT;

		//  ft_printf("\n=======================\n");
		//  ft_printf("===       %%s        ===\n");
		//  ft_printf("=======================\n");
		//  FRT("%14s", "elephant"); ENDFRT;
		//  PRT("%14s", "elephant"); ENDPRT;
		//  FRT("%-14s", "elephant"); ENDFRT;
		//  PRT("%-14s", "elephant"); ENDPRT;

		 ft_printf("\n=======================\n");
		 ft_printf("===       %%p        ===\n");
		 ft_printf("=======================\n");
		 FRT("%20p", &a); ENDFRT;
		 PRT("%20p", &a); ENDPRT;
		 FRT("%-20p", &a); ENDFRT;
		 PRT("%-20p", &a); ENDPRT;
		 FRT("%20p", (void *)0); ENDFRT;
		 PRT("%20p", (void *)0); ENDPRT;
		 FRT("%-20p", (void *)0); ENDFRT;
		 PRT("%-20p", (void *)0); ENDPRT;
		
		//  ft_printf("\n=======================\n");
		//  ft_printf("===       %%d        ===\n");
		//  ft_printf("=======================\n");
		//  FRT("%20d", (int)2147483648); ENDFRT;
		//  PRT("%20d", (int)2147483648); ENDPRT;
		//  FRT("%-20d", (int)2147483647); ENDFRT;
		//  PRT("%-20d", (int)2147483647); ENDPRT;

		//  ft_printf("=======================\n");
		//  ft_printf("===       %%i        ===\n");
		//  ft_printf("=======================\n");
		//  FRT("%5i", 3); ENDFRT;
		//  PRT("%5i", 3); ENDPRT;
		//  FRT("%-5i", -1); ENDFRT;
		//  PRT("%-5i", -1); ENDPRT;
		//  ft_printf("\n");

		 ft_printf("=======================\n");
		 ft_printf("===       %%u        ===\n");
		 ft_printf("=======================\n");
		 FRT("%3u", 0); ENDFRT;
		 PRT("%3u", 0); ENDPRT;
		 FRT("%5u", -1); ENDFRT;
		 PRT("%5u", -1); ENDPRT;
		 FRT("%-5u", -1); ENDFRT;
		 PRT("%-5u", -1); ENDPRT;
		 FRT("%15u", -1); ENDFRT;
		 PRT("%15u", -1); ENDPRT;
		 FRT("%-15u", -1); ENDFRT;
		 PRT("%-15u", -1); ENDPRT;
		 ft_printf("\n");

		 ft_printf("=======================\n");
		 ft_printf("===       %%x        ===\n");
		 ft_printf("=======================\n");
		 FRT("%2x", 0); ENDFRT;
		 PRT("%2x", 0); ENDPRT;
		 FRT("%-2x", 0); ENDFRT;
		 PRT("%-2x", 0); ENDPRT;
		 ft_printf("\n");

		 ft_printf("=======================\n");
		 ft_printf("===       %%X        ===\n");
		 ft_printf("=======================\n");
		 FRT("%4X", 1); ENDFRT;
		 PRT("%4X", 1); ENDPRT;
		 FRT("%-4X", 1); ENDFRT;
		 PRT("%-4X", 1); ENDPRT;
		 ft_printf("\n"); 
		 ft_printf("=================================\n");

		ft_printf("      # flag\n");

		ft_printf("=======================\n");
		ft_printf("===       %%x        ===\n");
		ft_printf("=======================\n");
		FRT("%#4x", 1); ENDFRT;
		PRT("%#4x", 1); ENDPRT;
		FRT("%-#4x", 1); ENDFRT;
		PRT("%-#4x", 1); ENDPRT;
		ft_printf("\n");

		ft_printf("=======================\n");
		ft_printf("===       %%X        ===\n");
		ft_printf("=======================\n");
		FRT("%#4X", 1); ENDFRT;
		PRT("%#4X", 1); ENDPRT;
		FRT("%-#4X", 1); ENDFRT;
		PRT("%-#4X", 1); ENDPRT;
		ft_printf("\n");
		ft_printf("=================================\n");

		ft_printf("      0 flag\n");
		
		// ft_printf("\n=======================\n");
		// ft_printf("===       %%d        ===\n");
		// ft_printf("=======================\n");
		// FRT("%020d", (int)2147483648); ENDFRT;
		// PRT("%020d", (int)2147483648); ENDPRT;
		// FRT("%0-20d", (int)2147483647); ENDFRT;
		// PRT("%0-20d", (int)2147483647); ENDPRT;

		// ft_printf("=======================\n");
		// ft_printf("===       %%i        ===\n");
		// ft_printf("=======================\n");
		// FRT("%05i", 3); ENDFRT;
		// PRT("%05i", 3); ENDPRT;
		// FRT("%0-5i", -1); ENDFRT;
		// PRT("%0-5i", -1); ENDPRT;
		// ft_printf("\n");

		ft_printf("=======================\n");
		ft_printf("===       %%u        ===\n");
		ft_printf("=======================\n");
		FRT("%03u", 0); ENDFRT;
		PRT("%03u", 0); ENDPRT;
		FRT("%05u", -1); ENDFRT;
		PRT("%05u", -1); ENDPRT;
		FRT("%0-5u", -1); ENDFRT;
		PRT("%0-5u", -1); ENDPRT;
		FRT("%015u", -1); ENDFRT;
		PRT("%015u", -1); ENDPRT;
		FRT("%0-15u", -1); ENDFRT;
		PRT("%0-15u", -1); ENDPRT;
		ft_printf("\n");

		ft_printf("=======================\n");
		ft_printf("===       %%x        ===\n");
		ft_printf("=======================\n");
		FRT("%02x", 0); ENDFRT;
		PRT("%02x", 0); ENDPRT;
		FRT("%0-2x", 0); ENDFRT;
		PRT("%0-2x", 0); ENDPRT;
		ft_printf("\n");

		ft_printf("=======================\n");
		ft_printf("===       %%X        ===\n");
		ft_printf("=======================\n");
		FRT("%04X", 1); ENDFRT;
		PRT("%04X", 1); ENDPRT;
		FRT("%0-4X", 1); ENDFRT;
		PRT("%0-4X", 1); ENDPRT;
		ft_printf("\n"); 
		// ft_printf("=================================\n");

		// ft_printf("    ' ' flag\n");
		
		// ft_printf("\n=======================\n");
		// ft_printf("===       %%d        ===\n");
		// ft_printf("=======================\n");
		// FRT("%0 20d", (int)2147483648); ENDFRT;
		// PRT("%0 20d", (int)2147483648); ENDPRT;
		// FRT("%0 -20d", (int)2147483647); ENDFRT;
		// PRT("%0 -20d", (int)2147483647); ENDPRT;

		// ft_printf("=======================\n");
		// ft_printf("===       %%i        ===\n");
		// ft_printf("=======================\n");
		// FRT("%0 5i", 3); ENDFRT;
		// PRT("%0 5i", 3); ENDPRT;
		// FRT("%0 -5i", -1); ENDFRT;
		// PRT("%0 -5i", -1); ENDPRT;
		// ft_printf("\n");
		
		// ft_printf("=================================\n");

		// ft_printf("      + flag\n");
		
		// ft_printf("\n=======================\n");
		// ft_printf("===       %%d        ===\n");
		// ft_printf("=======================\n");
		// FRT("%+ 20d", (int)2147483648); ENDFRT;
		// PRT("%+ 20d", (int)2147483648); ENDPRT;
		// FRT("%+ -20d", (int)2147483647); ENDFRT;
		// PRT("%+ -20d", (int)2147483647); ENDPRT;
		// FRT("%+0 20d", (int)2147483648); ENDFRT;
		// PRT("%+0 20d", (int)2147483648); ENDPRT;
		// FRT("%+0 -20d", (int)2147483647); ENDFRT;
		// PRT("%+0 -20d", (int)2147483647); ENDPRT;

		// ft_printf("=======================\n");
		// ft_printf("===       %%i        ===\n");
		// ft_printf("=======================\n");
		// FRT("%+ 5i", 3); ENDFRT;
		// PRT("%+ 5i", 3); ENDPRT;
		// FRT("%+ -5i", -1); ENDFRT;
		// PRT("%+ -5i", -1); ENDPRT;
		// FRT("%+0 5i", 3); ENDFRT;
		// PRT("%+0 5i", 3); ENDPRT;
		// FRT("%+0 -5i", -1); ENDFRT;
		// PRT("%+0 -5i", -1); ENDPRT;
		// ft_printf("\n");

		ft_printf("=================================\n");

		ft_printf("   hard case\n");

		FRT("%#05x", 255); ENDFRT;
		PRT("%#05x", 255); ENDPRT;
		ft_printf("\n");

		ft_printf("=================================\n");

		ft_printf("      . flag\n");

		// ft_printf("=======================\n");
		// ft_printf("===       %%s        ===\n");
		// ft_printf("=======================\n");
		// FRT("%.5s", "Hello I'm yuna."); ENDFRT;
		// PRT("%.5s", "Hello I'm yuna."); ENDPRT;
		// FRT("%.0s", "Hello I'm yuna."); ENDFRT;
		// PRT("%.0s", "Hello I'm yuna."); ENDPRT;
		// FRT("%7s", (char *)0); ENDFRT;
		// PRT("%7s", (char *)0); ENDPRT;
		// FRT("%-7s", (char *)0); ENDFRT;
		// PRT("%-7s", (char *)0); ENDPRT;
		// FRT("%1.s", (char *)0); ENDFRT;
		// PRT("%1.s", (char *)0); ENDPRT;
		// FRT("%.4s", (char *)0); ENDFRT;
		// PRT("%.4s", (char *)0); ENDPRT;
		// FRT("%14.5s", "elephant"); ENDFRT;
		// PRT("%14.5s", "elephant"); ENDPRT;
		// FRT("%2.3s", "elephant"); ENDFRT;
		// PRT("%2.3s", "elephant"); ENDPRT;
		// FRT("%-14.5s", "elephant"); ENDFRT;
		// PRT("%-14.5s", "elephant"); ENDPRT;
		// FRT("%.5s", (char *)0); ENDFRT;
		// PRT("%.5s", (char *)0); ENDPRT;
		// FRT("%.6s", (char *)0); ENDFRT;
		// PRT("%.6s", (char *)0); ENDPRT;
		// FRT("%.0s", (char *)0); ENDFRT;
		// PRT("%.0s", (char *)0); ENDPRT;
		// ft_printf("\n");

		// ft_printf("=======================\n");
		// ft_printf("===       %%d        ===\n");
		// ft_printf("=======================\n");
		// FRT("%.5d", 3); ENDFRT;
		// PRT("%.5d", 3); ENDPRT;
		// FRT("%.5d", -1); ENDFRT;
		// PRT("%.5d", -1); ENDPRT;
		// FRT("%.d", -1); ENDFRT;
		// PRT("%.d", -1); ENDPRT;
		// FRT("%.5d", -124); ENDFRT;
		// PRT("%.5d", -124); ENDPRT;
		// FRT("%.5d", (int)-2147483648); ENDFRT;
		// PRT("%.5d", (int)-2147483648); ENDPRT;
		// ft_printf("\n");

		// ft_printf("=======================\n");
		// ft_printf("===       %%i        ===\n");
		// ft_printf("=======================\n");
		// FRT("%.5i", 3); ENDFRT;
		// PRT("%.5i", 3); ENDPRT;
		// FRT("%.5i", -1); ENDFRT;
		// PRT("%.5i", -1); ENDPRT;
		// FRT("%.5i", (int)-2147483648); ENDFRT;
		// PRT("%.5i", (int)-2147483648); ENDPRT;
		// FRT("%.5i", (int)2147483648); ENDFRT;
		// PRT("%.5i", (int)2147483648); ENDPRT;
		// FRT("%.5i", (int)2147483647); ENDFRT;
		// PRT("%.5i", (int)2147483647); ENDPRT;
		// FRT("%5.5i", 3); ENDFRT;
		// PRT("%5.5i", 3); ENDPRT;
		// FRT("%-5.5i", -1); ENDFRT;
		// PRT("%-5.5i", -1); ENDPRT;
		// FRT("%05.5i", 3); ENDFRT;
		// PRT("%05.5i", 3); ENDPRT;
		// FRT("%0-5.5i", -1); ENDFRT;
		// PRT("%0-5.5i", -1); ENDPRT;
		// FRT("%0 5.5i", 3); ENDFRT;
		// PRT("%0 5.5i", 3); ENDPRT;
		// FRT("%0 -5.5i", -1); ENDFRT;
		// PRT("%0 -5.5i", -1); ENDPRT;
		// FRT("%+ 5.5i", 3); ENDFRT;
		// PRT("%+ 5.5i", 3); ENDPRT;
		// FRT("%+ -5.5i", -1); ENDFRT;
		// PRT("%+ -5.5i", -1); ENDPRT;
		// FRT("%+0 5.5i", 3); ENDFRT;
		// PRT("%+0 5.5i", 3); ENDPRT;
		// FRT("%+0 -5.5i", -1); ENDFRT;
		// PRT("%+0 -5.5i", -1); ENDPRT;
		// FRT("%.5i", 3); ENDFRT;
		// PRT("%.5i", 3); ENDPRT;
		// FRT("%.5i", -1); ENDFRT;
		// PRT("%.5i", -1); ENDPRT;
		// FRT("%.5i", (int)-2147483648); ENDFRT;
		// PRT("%.5i", (int)-2147483648); ENDPRT;
		// FRT("%.5i", (int)2147483648); ENDFRT;
		// PRT("%.5i", (int)2147483648); ENDPRT;
		// FRT("%.5i", (int)2147483647); ENDFRT;
		// PRT("%.5i", (int)2147483647); ENDPRT;
		// FRT("%%  %  %"); ENDFRT;
		// PRT("%%  %  %"); ENDPRT;
		// FRT("%01.i", -1); ENDFRT;
		// PRT("%01.i", -1); ENDPRT;
		// FRT("%1.i", -1); ENDFRT;
		// PRT("%1.i", -1); ENDPRT;
		// FRT("%.i", 0); ENDFRT;
		// PRT("%.i", 0); ENDPRT;
		// FRT("%1.i", 0); ENDFRT;
		// PRT("%1.i", 0); ENDPRT;
		// FRT("%01.i", 0); ENDFRT;
		// PRT("%01.i", 0); ENDPRT;
		// FRT("%015.2d", 42000); ENDFRT;
		// PRT("%015.2d", 42000); ENDPRT;
		// FRT("%015.13d", 42000); ENDFRT;
		// PRT("%015.13d", 42000); ENDPRT;
		// FRT("%010.13d", 42000); ENDFRT;
		// PRT("%010.13d", 42000); ENDPRT;
		// FRT("%.d", 0); ENDFRT;
		// PRT("%.d", 0); ENDPRT;
		// FRT("%5.d", 0); ENDFRT;
		// PRT("%5.d", 0); ENDPRT;
		// FRT("%-.i", 0); ENDFRT;
		// PRT("%-.i", 0); ENDPRT;
		// FRT("%-1.i", 0); ENDFRT;
		// PRT("%-1.i", 0); ENDPRT;
		// FRT("%-01.i", 0); ENDFRT;
		// PRT("%-01.i", 0); ENDPRT;
		// FRT("%-015.2d", 42000); ENDFRT;
		// PRT("%-015.2d", 42000); ENDPRT;
		// FRT("%-015.13d", 42000); ENDFRT;
		// PRT("%-015.13d", 42000); ENDPRT;
		// FRT("%-010.13d", 42000); ENDFRT;
		// PRT("%-010.13d", 42000); ENDPRT;
		// FRT("%-.d", 0); ENDFRT;
		// PRT("%-.d", 0); ENDPRT;
		// FRT("%-5.d", 0); ENDFRT;
		// PRT("%-5.d", 0); ENDPRT;
		// ft_printf("\n");

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

		ft_printf("=======================\n");
		ft_printf("===       %%x        ===\n");
		ft_printf("=======================\n");
		FRT("%.5x", 0); ENDFRT;
		PRT("%.5x", 0); ENDPRT;
		FRT("%.x", 0); ENDFRT;
		PRT("%.x", 0); ENDPRT;
		FRT("%3.x", 0); ENDFRT;
		PRT("%3.x", 0); ENDPRT;
		FRT("%.x", 3); ENDFRT;
		PRT("%.x", 3); ENDPRT;
		FRT("%.5x", -42); ENDFRT;
		PRT("%.5x", -42); ENDPRT;
		FRT("%.5x", -1); ENDFRT;
		PRT("%.5x", -1); ENDPRT;
		FRT("%7.5x", 19); ENDFRT;
		PRT("%7.5x", 19); ENDPRT;
		FRT("%-7.5x", 19); ENDFRT;
		PRT("%-7.5x", 19); ENDPRT;
		FRT("%-#10.5x", 19); ENDFRT;
		PRT("%-#10.5x", 19); ENDPRT;
		FRT("%#10.5x", 19); ENDFRT;
		PRT("%#10.5x", 19); ENDPRT;
		ft_printf("\n");

		ft_printf("=======================\n");
		ft_printf("===       %%X        ===\n");
		ft_printf("=======================\n");
		FRT("%.5X", 0); ENDFRT;
		PRT("%.5X", 0); ENDPRT;
		FRT("%.5X", -42); ENDFRT;
		PRT("%.5X", -42); ENDPRT;
		FRT("%.5X", -1); ENDFRT;
		PRT("%.5X", -1); ENDPRT;
		FRT("%01.X", 1); ENDFRT;
		PRT("%01.X", 1); ENDPRT;
		FRT("%01.X", 0); ENDFRT;
		PRT("%01.X", 0); ENDPRT;
		FRT("%02.X", 0); ENDFRT;
		PRT("%02.X", 0); ENDPRT;
		FRT("%03.X", 0); ENDFRT;
		PRT("%03.X", 0); ENDPRT;
		FRT("%-.X", 0); ENDFRT;
		PRT("%-.X", 0); ENDPRT;
		FRT("%-5.X", 0); ENDFRT;
		PRT("%-5.X", 0); ENDPRT;
		FRT("%010X", 42); ENDFRT;
		PRT("%010X", 42); ENDPRT;
		FRT("%2X", 1); ENDFRT;
		PRT("%2X", 1); ENDPRT;
		FRT("%.2X", 1); ENDFRT;
		PRT("%.2X", 1); ENDPRT;
		FRT("%020.2X", 42); ENDFRT;
		PRT("%020.2X", 42); ENDPRT;
		FRT("%020.10X", 42); ENDFRT;
		PRT("%020.10X", 42); ENDPRT;
		ft_printf("\n");
		
		// //wooslee veryvery king god smart.
		// FRT("%+.d", 0); ENDFRT; // check this
		// PRT("%+.d", 0); ENDPRT; // check this
		// FRT("% .d", 0); ENDFRT; // check this
		// PRT("% .d", 0); ENDPRT; // check this
		// FRT("%5.d", 0); ENDFRT;
		// PRT("%5.d", 0); ENDPRT;
		// FRT("% 5.d", 0); ENDFRT;
		// PRT("% 5.d", 0); ENDPRT;
		// FRT("%+5.d", 0); ENDFRT; // check this
		// PRT("%+5.d", 0); ENDPRT; // check this
		// FRT("%+.d", 1); ENDFRT;
		// PRT("%+.d", 1); ENDPRT;
		// FRT("% .d", 1); ENDFRT;
		// PRT("% .d", 1); ENDPRT;
		// FRT("%5.d", 1); ENDFRT;
		// PRT("%5.d", 1); ENDPRT;
		// FRT("% 5.d", 1); ENDFRT;
		// PRT("% 5.d", 1); ENDPRT;
		// FRT("%+5.d", 1); ENDFRT;
		// PRT("%+5.d", 1); ENDPRT;

		// ft_printf("\n\n=== jaegbae gunun sininga ===\n");
		// FRT("%+ 20.d", 0); ENDFRT; // check this
		// PRT("%+ 20.d", 0); ENDPRT; // check this
		// FRT("%+ 20.19d", INT_MAX); ENDFRT; // check this
		// PRT("%+ 20.19d", INT_MAX); ENDPRT; // check this
		// FRT("%-+ 20.15d", INT_MAX); ENDFRT; // check this
		// PRT("%-+ 20.15d", INT_MAX); ENDPRT; // check this

		// FRT("%+ 020d", 0); ENDFRT;
		// PRT("%+ 020d", 0); ENDPRT;
		// FRT("%+ 020d", INT_MAX); ENDFRT;
		// PRT("%+ 020d", INT_MAX); ENDPRT;
		// FRT("%+ 020d", INT_MIN); ENDFRT;
		// PRT("%+ 020d", INT_MIN); ENDPRT;
		// FRT("%+ 020d", INT_MAX); ENDFRT;
		// PRT("%+ 020d", INT_MAX); ENDPRT;
		// FRT("%-+ 020d", INT_MAX); ENDFRT;
		// PRT("%-+ 020d", INT_MAX); ENDPRT;
		// FRT("%-+ 020d", INT_MIN); ENDFRT;
		// PRT("%-+ 020d", INT_MIN); ENDPRT;
	
}