/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:42:46 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/14 20:46:48 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_putchr(int c);
int		ft_putstr(const char *num);
char	*ft_itoa(int n);
int		ft_putnbr(int n);
int		ft_countdigits(unsigned int num, int base);
int		ft_utoa(unsigned int n);
int		ft_hextoa(unsigned int n, const char *base);
int		ft_ptoa(unsigned long int n, const char *base);
int		ft_format(const char *format, va_list args);
int		ft_printf(const char *format, ...);

#endif