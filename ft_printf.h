/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri < ruirodri@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:42:46 by ruirodri          #+#    #+#             */
/*   Updated: 2023/12/17 19:23:13 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

int	ft_printf(const char *format, ...);
int	ft_format(const char *format, va_list args);
int	ft_print_char(int c);
int	ft_print_string(char *str);
int	ft_print_int(int n);
int	ft_print_hex(unsigned long long n, int base);
int	ft_print_pointer(void *ptr);
int	ft_print_uint(unsigned int n);
#endif