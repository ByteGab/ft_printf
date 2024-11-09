/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:08:26 by gafreire          #+#    #+#             */
/*   Updated: 2024/11/08 19:56:55 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	formats(va_list arguments, char format)
{
	int	size_format;

	size_format = 0;
	if (format == 'c')
		size_format = ft_putcharInt(va_arg(arguments, int));
	else if (format == 's')
		size_format = ft_putstrInt(va_arg(arguments, char *));
	else if (format == 'p')
		size_format = ft_voidHex(va_arg(arguments, void *)); // void *
	else if (format == 'd' || format == 'i')
		size_format = ft_putnbrInt(va_arg(arguments, int));
	else if (format == 'u')
		size_format = ft_putnbrUn(va_arg(arguments, int));
	else if (format == 'x')
		size_format = ft_lowerHex(va_arg(arguments, unsigned int));
	else if (format == 'X')
		size_format = ft_upperHex(va_arg(arguments, unsigned int));
	else if (format == '%')
		size_format = ft_putcharInt('%');
	return (size_format);
}

int	ft_printf(char const *format, ...)
{
	int		i;
	int		value;
	va_list	arguments;

	i = 0;
	value = 0;
	va_start(arguments, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				value += formats(arguments, format[i + 1]);
				i++;
			}
		}
		else
			value += ft_putcharInt(format[i]); 
		i++;
	}
	va_end(arguments);
	return (value);
}

/*
int	main(void)
{
	int	print;

	print = ft_printf(" %p ", -1);
	ft_printf("\n");
	ft_printf("%i", print);
	ft_printf("\n");
}
*/
