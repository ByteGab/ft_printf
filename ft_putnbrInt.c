/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrInt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:27:29 by gafreire          #+#    #+#             */
/*   Updated: 2024/11/02 19:29:36 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrInt(int n)
{
	int size_format;

	size_format = 0;
	if (n == -2147483648)
	{
		size_format += ft_putcharInt('-');
		size_format += ft_putcharInt('2');
		size_format += ft_putnbrInt(147483648);
	}
	if (n < 0)
	{
		size_format += ft_putcharInt('-');
		n = -n;
	}
	if (n > 9)
	{
		size_format += ft_putnbrInt(n / 10);
		size_format += ft_putnbrInt(n % 10);
	}
	else
	{
		size_format += ft_putcharInt(n + '0');
	}
	return (size_format);
}