/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:49:32 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/14 21:02:16 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_numlen(int num)
{
	int	len;

	if (num > 0)
		len = 0;
	else
		len = 1;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	int long	num;
	char		*str;

	num = n;
	len = ft_numlen(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (num == 0)
		*str = '0';
	else if (num < 0)
	{
		num = num * -1;
		*str = '-';
	}
	while (num > 0)
	{
		str[len--] = ('0' + (num % 10));
		num = num / 10;
	}
	return (str);
}
