/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:08:26 by gafreire          #+#    #+#             */
/*   Updated: 2024/10/30 17:00:33 by gafreire         ###   ########.fr       */
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

	va_start(arguments, format);
	i = 0;
	while (format[i] != NULL)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				formats(format, arguments);
			}
		}
		i++;
	}
	return (0);
}
static char	formats(va_list arguments, char format)
{
	if (format == 'd')
	{
		ft_putnbr_fd(va_arg(arguments, int), 1);
		// llamar itoa para saber tamaño
	}
}