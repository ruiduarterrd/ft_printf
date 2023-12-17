/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri < ruirodri@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 06:54:40 by ruirodri          #+#    #+#             */
/*   Updated: 2023/12/14 08:51:46 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long long n, int base)
{
	int		count;
	char	*hex_lower;
	char	*hex_upper;
	char	*hex;

	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	if (base)
		hex = hex_upper;
	else
		hex = hex_lower;
	count = 0;
	if (n >= 16)
		count += ft_print_hex(n / 16, base);
	ft_print_char(hex[n % 16]);
	count++;
	return (count);
}
