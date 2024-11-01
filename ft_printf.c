/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:08:26 by gafreire          #+#    #+#             */
/*   Updated: 2024/11/01 18:31:17 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdarg.h>

// va_start
// va_arg
// va_copy
// va_end
// write
// malloc
// free

int	ft_printf(char const *format, ...)
{
	va_list	arguments;
	int		i;
	int		value;

	va_start(arguments, format);
	i = 0;
	value = 0;
	while (format[i] != NULL)
	{
		write(1, format[i], 1);
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				value += formats(arguments, format[i]);
			}
		}
		i++;
	}
	value += i;
	return (value);
}
static int	formats(va_list arguments, char format)
{
	int size_format;

	size_format = 0;
	if (format == 'c')
	{
		ft_putchar_fd(va_arg(arguments, char), 1);
	}
	else if (format == 's')
	{
		ft_putstr_fd(va_arg(arguments, char *), 1);
		// falta añadir \0
	}
	else if (format == 'p')
	{
	}
	else if (format == 'd')
	{
		ft_putnbr_fd(va_arg(arguments, int), 1);
		// size_format = ();
		// llamar itoa para saber tamaño
	}
	else if (format == 'i')
	{
	}
	else if (format == 'u')
	{
	}
	else if (format == 'x')
	{
	}
	else if (format == 'X')
	{
	}
	else if (format == '%')
	{
		write(1, '%', 1);
		size_format = 1;
	}

	return (size_format);
}