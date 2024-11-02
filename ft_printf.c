/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:08:26 by gafreire          #+#    #+#             */
/*   Updated: 2024/11/02 20:17:45 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libftprintf.h"
#include <stdarg.h>

// va_start
// va_arg
// va_copy
// va_end
// write
// malloc
// free

static int	formats(va_list arguments, char format)
{
	int	size_format;

	size_format = 0;
	if (format == 'c')
		size_format = ft_putcharInt(va_arg(arguments, char));
	else if (format == 's')
		size_format = ft_putstrInt(va_arg(arguments, char *));
	else if (format == 'p')
	{
		// El puntero void* dado como argumento se imprime en formato hexadecimal
	}
	else if (format == 'd')
		size_format = ft_putnbrInt(va_arg(arguments, int));
	else if (format == 'i')
		size_format = ft_putnbrInt(va_arg(arguments, int));
	else if (format == 'u')
	{
		// Imprime un número decimal (base 10) sin signo.
	}
	else if (format == 'x')
	{
		// Imprime un número hexadecimal (base 16) en minúsculas
	}
	else if (format == 'X')
	{
		// Imprime un número hexadecimal (base 16) en mayúsculas.
	}
	else if (format == '%')
	{
		write(1, '%', 1);
		size_format = 1;
	}
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
			}
		}
		else
		{
			write(1, &format[i], 1);
		}
		i++;
	}
	va_end(arguments);
	value += i;
	return (value);
}

int	main(void)
{
	int print = ft_printf("Hola que tal %s", "hola");
	write(1, "\n", 1);
	ft_printf("%i", print);
	write(1, "\n", 1);
}