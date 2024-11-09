/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_voidHex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:22:57 by gafreire          #+#    #+#             */
/*   Updated: 2024/11/08 19:23:40 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_voidHex(void *n)
{
	unsigned long long nL;
    int size_format;
	char * baseHex;
    
    size_format = 0;
	nL = (unsigned long long)n;
	baseHex = "0123456789abcdef";
	if (nL == 0)
	{
		size_format += ft_putstrInt("0x0");
		return (size_format);
	}
    size_format += ft_putstrInt("0x");
	if (nL >= 16)
	{
		size_format += ft_voidHex((void *)(nL/ 16));
	}
	else
	{
		size_format += ft_putcharInt((unsigned int)baseHex[nL % 16]);
	}
	return (size_format);
}