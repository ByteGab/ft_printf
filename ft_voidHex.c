/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_voidHex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:22:57 by gafreire          #+#    #+#             */
/*   Updated: 2024/11/09 19:51:54 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlenHex(unsigned long long n)
{
	int	size_format;

	size_format = 0;
	if (n <= 0)
		size_format++;
	while (n)
	{
		n /= 16;
		size_format++;
	}
	return (size_format);
}

void	ft_putHex(unsigned long long n)
{
	char	*baseHex;

	baseHex = "0123456789abcdef";
	if (n >= 16)
	{
		ft_putHex(n / 16);
		ft_putHex(n % 16);
	}
	else
	{
			ft_putcharInt((unsigned int)baseHex[n % 16]);	
	}
}

int	ft_voidHex(void *n)
{
	unsigned long long nL;
	int size_format;

	size_format = 0;
	nL = (unsigned long long)n;
	size_format += ft_putstrInt("0x");
	if (nL == 0)
	{
		size_format += ft_putstrInt("0");
	}
	else
	{
		ft_putHex(nL);
		size_format += ft_strlenHex(nL);
	}
	return (size_format);
}