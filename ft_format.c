/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri < ruirodri@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:52:30 by ruirodri          #+#    #+#             */
/*   Updated: 2023/12/17 19:02:01 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *format, va_list args)
{
	if (*format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (*format == 's')
		return (ft_print_string(va_arg(args, char *)));
	else if (*format == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else if (*format == 'd' || *format == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (*format == 'u')
		return (ft_print_uint(va_arg(args, unsigned int)));
	else if (*format == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	else if (*format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	else if (*format == '%')
		return (ft_print_char('%'));
	return (0);
}
