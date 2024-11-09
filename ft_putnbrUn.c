/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrUn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:54:30 by gafreire          #+#    #+#             */
/*   Updated: 2024/11/09 19:59:20 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrUn(unsigned int n)
{
	unsigned int	size_format;

	size_format = 0;
	/*if (n < 0)
	{
		size_format += ft_putcharInt('-');
		n = -n;
	}
	*/
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
