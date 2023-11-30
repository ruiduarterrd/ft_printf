/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarte.rrd <ruiduarte.rrd@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:52:30 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/30 20:34:55 by ruiduarte.r      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *format, va_list args)
{
	int		count;
	char	*x;
	char	*X;

	x = "0123456789abcdef";
	X = "0123456789ABCDEF";
	count = 0;
	if (*format == 'c')
		count += ft_putchr(va_arg(args, int));
	if (*format == 's')
		count += ft_putstr(va_arg(args, char *));
	if (*format == 'p')
		count += ft_ptoa((unsigned long int)((va_arg(args, void *))), x);
	if (*format == 'd' || *format == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (*format == 'u')
		count += ft_utoa(va_arg(args, unsigned int));
	if (*format == 'x')
		count += ft_hextoa(va_arg(args, unsigned int), x);
	if (*format == 'X')
		count += ft_hextoa(va_arg(args, unsigned int), X);
	if (*format == '%')
		count += ft_putchr('%');
	return (count);
}
