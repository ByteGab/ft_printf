/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharInt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:14:59 by gafreire          #+#    #+#             */
/*   Updated: 2024/11/02 19:24:24 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putcharInt(char c)
{
	write(1, &c, 1);
	return (1);
}