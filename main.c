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
	ft_printf("===       %%c        ===\n");
	ft_printf("=======================\n");
	FRT("%c", 'a'); ENDFRT;
	FRT("%c", 'a'); ENDPRT;
	ft_printf("\n");

	ft_printf("=======================\n");
	ft_printf("===       %%s        ===\n");
	ft_printf("=======================\n");
	FRT("%s", "Hello I'm yuna."); ENDFRT;
	PRT("%s", "Hello I'm yuna."); ENDPRT;
	FRT("%s", "halp me"); ENDFRT;
	PRT("%s", "halp me"); ENDPRT;
	FRT("this is %s", "halp me"); ENDFRT;
	PRT("this is %s", "halp me"); ENDPRT;
	FRT("%s", (char *)0); ENDFRT;
	PRT("%s", (char *)0); ENDPRT;
	ft_printf("\n");

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

	ft_printf("=======================\n");
	ft_printf("===       %%d        ===\n");
	ft_printf("=======================\n");
	FRT("%d", 3); ENDFRT;
	PRT("%d", 3); ENDPRT;
	FRT("%d", -1); ENDFRT;
	PRT("%d", -1); ENDPRT;
	FRT("%d", -124); ENDFRT;
	PRT("%d", -124); ENDPRT;
	FRT("%d", (int)-2147483648); ENDFRT;
	PRT("%d", (int)-2147483648); ENDPRT;
	ft_printf("\n");





}
