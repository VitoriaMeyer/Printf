/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:53:32 by vmeyer-s          #+#    #+#             */
/*   Updated: 2022/04/04 21:42:49 by vmeyer-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

// counter
unsigned int	g_c;

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putusg(unsigned int n);
int	ft_hexa(unsigned int n, char c);
int	ft_base(unsigned long int n, char *str, unsigned long int size);
int	handle_format(char c, va_list args);
int	ft_ptr(unsigned long int n);


#endif 