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

int	ft_lowerHex(int n)
{
    int size_format;
    
    size_format = 0;
	if (n > 16)
	{
		size_format += ft_lowerHex(n / 10);
		size_format += ft_lowerHex(n % 10);
	}
}