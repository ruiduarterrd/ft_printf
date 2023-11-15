/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:52:30 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/14 21:02:12 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *format, va_list args)
{
	int		count;
	char	*x;

	x = "0123456789abcdef";
	count = 0;
	if (*format == 'c')
		count += ft_putchr(va_arg(args, int));
	else if (*format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (*format == 'p')
		count += ft_ptoa((unsigned long int)((va_arg(args, void *))), x);
	else if (*format == 'd' || *format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (*format == 'u')
		count += ft_utoa(va_arg(args, unsigned int));
	else if (*format == 'x' || *format == 'X')
	{
		if (*format == 'x')
			count += ft_hextoa(va_arg(args, unsigned int), x);
		else
			count += ft_hextoa(va_arg(args, unsigned int), "0123456789ABCDEF");
	}
	else if (*format == '%')
		count += ft_putchr('%');
	return (count);
}
