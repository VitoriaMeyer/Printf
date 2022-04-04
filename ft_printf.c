/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:48:18 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/04/04 21:44:05 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	handle_format(char c, va_list args)
{
	if (c == 'c')
		g_c += ft_putchar(va_arg(args, int));
	if (c == 's')
		ft_putstr(va_arg(args, char *));
	if (c == 'p')
 		g_c = ft_ptr(va_arg(args, unsigned long int));
 	if (c == 'u')
		ft_putusg(va_arg(args, unsigned int));
 	if (c == 'x')
 		ft_hexa(va_arg(args, unsigned long int), c);
 	if (c == 'X')
 		ft_hexa(va_arg(args, unsigned long int), c);
	if (c == 'd' || c =='i')
		ft_putnbr(va_arg(args, int));
	if (c == '%')
		g_c += ft_putchar('%');
 	return (g_c);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	
	g_c = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			++str;
			handle_format(*str, args);
		}
		else
			g_c += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (g_c);
}
