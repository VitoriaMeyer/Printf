/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:57:06 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/03/28 23:46:29 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"


int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		g_c += ft_putchar(s[i++]);
	return (g_c);
}

int	ft_putnbr(int n)
{
	unsigned int	nbr;
	
	if (n < 0)
	{
		g_c += ft_putchar('-');
		nbr = (unsigned int)(n * -1);
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	g_c += ft_putchar((char)(nbr % 10 + 48));
	return (g_c);
}

int	ft_base(unsigned long int n, char *str, unsigned long int size)
{
	if (n >= size)
 		ft_base((n / size), str, size);
	g_c += ft_putchar(str[n % size]);
	return (g_c);
}

int	ft_putusg(unsigned int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	g_c += ft_putchar((char)(n % 10 + 48));
	return (g_c);
}

int	ft_hexa(unsigned long int n, char c)
{
	if (c == 'x' || c == 'p')
	{
		if (c != 'p')
			return (ft_base(n, "0123456789abcdef", 16));
		write(1, "0x", 2);
		return (ft_base(n, "0123456789abcdef", 16));
	}
	else
		return (ft_base(n, "0123456789ABCDEF", 16));
}