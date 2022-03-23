/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:48:18 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/03/23 10:48:38 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

unsigned int	g_c = 0;

int	handle_format(char c, va_list args)
{
	if (c == 'c')
		g_c = (ft_putchar(va_arg(args, int)));
	if (c == 's')
		g_c = (ft_putstr(va_arg(args, char *)));
// 	if (c == 'p')
// 		return (ft_fptr);
// 	if (c == 'u')
// 		return (ft_funsnum);
// 	if (c == 'x')
// 		return (g_c = (ft_base(va_arg(args, unsigned int), "0123456789abcdef")));
// 	if (c == 'X')
// 		return (g_c = (ft_base(va_arg(args, unsigned int), 
// 		"0123456789ABCDEF")));
	if (c == 'd' || c =='i')
		return (g_c = (ft_putnbr(va_arg(args, int))));
	if (c == '%')
		return (g_c = (ft_putchar('%')));
 	return (g_c);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	unsigned int	counter;
	
	counter = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			++str;
			counter += handle_format(*str++, args);
		}
		counter += ft_putchar(*str);  
		str++;
	}
	va_end(args);
	return (counter);
}
