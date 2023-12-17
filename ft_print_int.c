/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri < ruirodri@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 06:22:33 by ruirodri          #+#    #+#             */
/*   Updated: 2023/12/17 18:59:23 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	long int	num;
	int			count;

	num = n;
	count = 0;
	if (num < 0)
	{
		ft_print_char('-');
		count++;
		num = -num;
	}
	if (num >= 10)
		count += ft_print_int(num / 10);
	ft_print_char('0' + num % 10);
	count++;
	return (count);
}
