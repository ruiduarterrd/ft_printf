/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri < ruirodri@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 05:02:51 by ruiduarte.r       #+#    #+#             */
/*   Updated: 2023/12/17 12:32:14 by ruirodri         ###   ########.fr       */
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
			ft_print_char(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

/* int main(void)
{
	char c = 'c';
	char s[] = "ola %%";
    void *p = (void *)0x12345678;
	int d = -42;
    int i = 1;
    unsigned int u = 42;
    unsigned int x = 255;
    unsigned int X = 255;
    int count = 0;

	// PRINTF -> %c
	printf("FORMAT = 'c'\n\t   PRINTF OUTPUT -> ");
	count = printf("%c", c);
	printf("        \n\t\t   COUNT -> %d\n", count);
	// FT_PRINTF -> %c
	ft_printf("FORMAT = 'c'\n\tFT_PRINTF OUTPUT -> ");
	count = ft_printf("%c", c);
	ft_printf("        \n\t\t   COUNT -> %d\n", count);

	// PRINTF -> %s
	printf("FORMAT = 's'\n\t   PRINTF OUTPUT -> ");
	count = printf("%s", s);
	printf("        \n\t\t   COUNT -> %d\n", count);
	// FT_PRINTF -> %s
	ft_printf("FORMAT = 's'\n\tFT_PRINTF OUTPUT -> ");
	count = ft_printf("%s", s);
	ft_printf("        \n\t\t   COUNT -> %d\n", count);

	// PRINTF -> %p
	printf("FORMAT = 'p'\n\t   PRINTF OUTPUT -> ");
	count = printf("%p", p);
	printf("        \n\t\t   COUNT -> %d\n", count);
	// FT_PRINTF -> %p
	ft_printf("FORMAT = 'p'\n\tFT_PRINTF OUTPUT -> ");
	count = ft_printf("%p", p);
	ft_printf("        \n\t\t   COUNT -> %d\n", count);

	// PRINTF -> %d
	printf("FORMAT = 'd'\n\t   PRINTF OUTPUT -> ");
	count = printf("%d", d);
	printf("        \n\t\t   COUNT -> %d\n", count);
	// FT_PRINTF -> %d
	ft_printf("FORMAT = 'd'\n\tFT_PRINTF OUTPUT -> ");
	count = ft_printf("%d", d);
	ft_printf("        \n\t\t   COUNT -> %d\n", count);

	// PRINTF -> %i
	printf("FORMAT = 'i'\n\t   PRINTF OUTPUT -> ");
	count = printf("%i", i);
	printf("        \n\t\t   COUNT -> %d\n", count);
	// FT_PRINTF -> %i
	ft_printf("FORMAT = 'i'\n\tFT_PRINTF OUTPUT -> ");
	count = ft_printf("%i", i);
	ft_printf("        \n\t\t   COUNT -> %d\n", count);

	// PRINTF -> %u
	printf("FORMAT = 'u'\n\t   PRINTF OUTPUT -> ");
	count = printf("%u", u);
	printf("        \n\t\t   COUNT -> %d\n", count);
	// FT_PRINTF -> %u
	ft_printf("FORMAT = 'u'\n\tFT_PRINTF OUTPUT -> ");
	count = ft_printf("%u", u);
	ft_printf("        \n\t\t   COUNT -> %d\n", count);

	// PRINTF -> %p
	printf("FORMAT = 'p'\n\t   PRINTF OUTPUT -> ");
	count = printf("%p", p);
	printf("        \n\t\t   COUNT -> %d\n", count);
	// FT_PRINTF -> %p
	ft_printf("FORMAT = 'p'\n\tFT_PRINTF OUTPUT -> ");
	count = ft_printf("%p", p);
	ft_printf("        \n\t\t   COUNT -> %d\n", count);

	// PRINTF -> %x
	printf("FORMAT = 'x'\n\t   PRINTF OUTPUT -> ");
	count = printf("%x", x);
	printf("        \n\t\t   COUNT -> %d\n", count);
	// FT_PRINTF -> %x
	ft_printf("FORMAT = 'x'\n\tFT_PRINTF OUTPUT -> ");
	count = ft_printf("%x", x);
	ft_printf("        \n\t\t   COUNT -> %d\n", count);

	// PRINTF -> %X
	printf("FORMAT = 'X'\n\t   PRINTF OUTPUT -> ");
	count = printf("%X", X);
	printf("        \n\t\t   COUNT -> %d\n", count);
	// FT_PRINTF -> %X
	ft_printf("FORMAT = 'X'\n\tFT_PRINTF OUTPUT -> ");
	count = ft_printf("%X", X);
	ft_printf("        \n\t\t   COUNT -> %d\n", count);
	return (0);
}
*/