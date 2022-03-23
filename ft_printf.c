/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 23:48:18 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/03/22 09:09:07 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

//unsigned int	g_c = 0;

int	handle_format(char c, va_list args)
{
	g_c = 0;
	if (c == 'c')
		g_c += (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (g_c += (ft_putstr(va_arg(args, char *))));
// 	else if (c == 'p')
// 		return (ft_fptr);
// 	else if (c == 'u')
// 		return (ft_funsnum);
// 	else if (c == 'x')
// 		return (g_c += (ft_base(va_arg(args, unsigned int), "0123456789abcdef")));
// 	else if (c == 'X')
// 		return (g_c += (ft_base(va_arg(args, unsigned int), 
// 		"0123456789ABCDEF")));
	else if (c == 'd' || c =='i')
		return (g_c += (ft_putnbr(va_arg(args, int))));
	else if (c == '%')
		return (g_c += (ft_putchar('%')));
 	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;

	i = 0;
	//g_c = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			g_c += handle_format(format[i], args);
		}
		g_c += ft_putchar(format[i]);  
		i++;
	}
	va_end(args);
	return (g_c);
}

int	main()
{
	int	n = 2000000000;
	char c = 'B';
	char *s = "um churrasco agora era massa";
	int count;
	
	ft_printf("\n");
	printf("--------] STRINGS [---------\n");
	ft_printf("\n");
	count = ft_printf("Mine ----> %s\n", s);
	printf("(%d)\n", count);
	ft_printf("\n");
	count = printf("Printf --> %s\n", s);
	printf("(%d)\n", count);
	printf("\n");

	printf("----------] CHAR [----------\n");
	ft_printf("\n");
	count = ft_printf("Mine ----> %c\n", c);
	printf("(%d)\n", count);
	ft_printf("\n");
	count = printf("Printf --> %c\n", c);
	printf("(%d)\n", count);
	ft_printf("\n");

	printf("--------] DECIMAL [---------\n");
	ft_printf("\n");
	count = ft_printf("Mine ----> %d\n", n);
	printf("(%d)\n", count);
	ft_printf("\n");
	count = printf("Printf --> %d\n", n);
	printf("(%d)\n", count);
	printf("\n");	
	
	printf("--------] INTEGER [---------\n");
	ft_printf("\n");
	count = ft_printf("Mine ----> %i\n", n);
	printf("(%d)\n", count);
	ft_printf("\n");
	count = printf("Printf --> %i\n", n);
	printf("(%d)\n", count);
	printf("\n");
	
	printf("---------] SINAL [----------\n");
	ft_printf("\n");
	count = ft_printf("Mine ----> %%\n");
	printf("(%d)\n", count);
	ft_printf("\n");
	count = printf("Printf --> %%\n");
	printf("(%d)\n", count);
	printf("\n");
}
