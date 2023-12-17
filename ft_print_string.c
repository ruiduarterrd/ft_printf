/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri < ruirodri@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:48:52 by ruirodri          #+#    #+#             */
/*   Updated: 2023/12/17 19:23:49 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	i;

	if (!str)
		str = "(null)";
	i = 0;
	while (str[i])
		i++;
	return (write(1, str, i));
}
