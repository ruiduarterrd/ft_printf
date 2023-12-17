/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri < ruirodri@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 06:06:55 by ruiduarte.r       #+#    #+#             */
/*   Updated: 2023/12/17 19:10:39 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	int	count;

	count = 0;
	if (ptr == NULL)
		return (ft_print_string("(nil)"));
	count += ft_print_string("0x");
	count += ft_print_hex((unsigned long long)ptr, 0);
	return (count);
}
