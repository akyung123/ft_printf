/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akkim <akkim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 02:22:18 by akkim             #+#    #+#             */
/*   Updated: 2025/08/03 00:20:58 by akkim            ###   ########.fr       */
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
	
	FRT(" % d ", 0); ENDFRT;
	PRT(" % d ", 0); ENDPRT;
	FRT(" %+d ", 0); ENDFRT;
	PRT(" %+d ", 0); ENDPRT;
	FRT(" %+d ", LONG_MIN); ENDFRT;
	PRT(" %+d ", LONG_MIN); ENDPRT;
	FRT(" % d ", LONG_MIN); ENDFRT;
	PRT(" % d ", LONG_MIN); ENDPRT;
	FRT(" % d % d % d % d % d % d % d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); ENDFRT;
	PRT(" % d % d % d % d % d % d % d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42); ENDPRT;
			
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
