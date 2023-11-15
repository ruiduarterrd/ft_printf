/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:51:08 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/14 21:33:36 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_utoa(unsigned int n)
{
	int		count;
	int		len;
	char	*num;

	len = ft_countdigits(n, 10);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (num == NULL)
		return (0);
	count = 0;
	if (n == 0)
		count += ft_putchr('0');
	else
	{
		while (0 < len)
		{
			num[--len] = n % 10 + '0';
			n /= 10;
		}
		count += ft_putstr(num);
	}
	free(num);
	return (count);
}
