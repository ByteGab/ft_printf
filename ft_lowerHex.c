/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowerHex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:07:02 by gafreire          #+#    #+#             */
/*   Updated: 2024/11/08 19:55:37 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lowerHex(unsigned int n)
{
    int size_format;
	char * baseHex;
    
    size_format = 0;
	baseHex = "0123456789abcdef";
	if (n >= 16)
	{
		size_format += ft_lowerHex((unsigned int)n / 16);
		size_format += ft_lowerHex((unsigned int)n % 16);
	}
	else
	{
		size_format += ft_putcharInt(baseHex[n % 16]);
	}
	return (size_format);
}