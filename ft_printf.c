/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:43:15 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/16 16:32:01 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_format(format, args);
		}
		else
		{
			ft_putchr(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

/*
int main(void)
{
    char s[] = "Hello, World!";
    void *p = (void *)0x12345678;
    int d = -42;
    int i = 1;
    unsigned int u = 42;
    unsigned int x = 255;
    unsigned int X = 255;
    int count = 0;
	int count2 = 0;

    // printf("%%s:\n");
    count = printf("%%s: '%s'\n", s);
    printf("count: %d\n\n", count);
	count2 = ft_printf("%%s: '%s'\n", s);
    printf("count: %d\n\n", count2);

    // printf("%%p:\n");
    count = printf("%%p: '%p'\n", p);
    printf("count: %d\n\n", count);
    count2 = ft_printf("%%p: '%p'\n", p);
    printf("count: %d\n\n", count2);

    // printf("%%d:\n");
    count = printf("%%d: '%d'\n", d);
    printf("count: %d\n\n", count);
	count2 = ft_printf("%%d: '%d'\n", d);
    printf("count: %d\n\n", count2);

    // printf("%%i:\n");
    count = printf("%%i: '%i'\n", i);
    printf("count: %d\n\n", count);
    count2 = ft_printf("%%i: '%i'\n", i);
    printf("count: %d\n\n", count2);

    // printf("%%u:\n");
    count = printf("%%u: '%u'\n", u);
    printf("count: %d\n\n", count);
    count2 = ft_printf("%%u: '%u'\n", u);
    printf("count: %d\n\n", count2);

    // printf("%%x:\n");
    count = printf("%%x: '%x'\n", x);
    printf("count: %d\n\n", count);
    count2 = ft_printf("%%x: '%x'\n", x);
    printf("count: %d\n\n", count2);

    // printf("%%X:\n");
    count = printf("%%X: '%X'\n", X);
    printf("count: %d\n\n", count);
    count2 = ft_printf("%%X: '%X'\n", X);
    printf("count: %d\n\n", count2);

    // printf("%%:\n");
    count = printf("%% : '%%'\n");
    printf("count: %d\n\n", count);
	count2 = ft_printf("%% : '%%'\n");
    printf("count: %d\n\n", count2);
    return (0);
}
*/