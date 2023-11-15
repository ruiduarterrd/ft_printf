/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:51:37 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/14 21:32:50 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hextoa(unsigned int n, const char *base)
{
	int		count;
	int		i;
	int		rest;
	char	*num;

	count = 0;
	i = 0;
	num = (char *)malloc(sizeof(char) * (ft_countdigits(n, 16) + 1));
	if (num == NULL)
		return (0);
	count = 0;
	if (n == 0)
		count += ft_putchr('0');
	while (n > 0)
	{
		rest = n % 16;
		num[i++] = base[rest];
		n /= 16;
	}
	while (--i >= 0)
		count += ft_putchr(num[i]);
	free(num);
	return (count);
}
