/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:57:06 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/03/23 10:50:07 by vmeyer-s         ###   ########.fr       */
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
	if (!s)
		return (0);
	while (s[g_c] != '\0')
		g_c += ft_putchar(s[g_c]);
	return (g_c);
}

int	ft_putnbr(int n)
{
	unsigned int	nbr;
	
	g_c = 0;
	if (n < 0)
	{
		ft_putchar('-');
		nbr = (unsigned int)(n * -1);
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	g_c += ft_putchar((char)(nbr % 10 + 48));
	return (g_c);
}

// int	ft_base(long int n, char *str)
// {
// 	unsigned int i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	if (n / i != 0)
// 	{
// 		ft_base((n % i), str);
// 		g_c += ;

// 	}
// }

// int	ft_hexa(unsigned int n)
// {	
// }
