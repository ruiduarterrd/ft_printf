/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:50:38 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/14 21:02:10 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countdigits(unsigned int num, int base)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num /= base;
		len++;
	}
	return (len);
}
