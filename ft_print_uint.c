/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri < ruirodri@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 06:49:29 by ruirodri          #+#    #+#             */
/*   Updated: 2023/12/13 07:17:16 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uint(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_print_uint(n / 10);
	ft_print_char('0' + n % 10);
	count++;
	return (count);
}
