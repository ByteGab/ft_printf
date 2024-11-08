/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upperHex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:08:02 by gafreire          #+#    #+#             */
/*   Updated: 2024/11/08 19:57:56 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_upperHex(int n)
{
      int size_format;
    
    size_format = 0;
	if (n > 16)
	{
		size_format += ft_upperHex(n / 10);
		size_format += ft_upperHex(n % 10);
	}
}