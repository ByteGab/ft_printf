/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:14:17 by gafreire          #+#    #+#             */
/*   Updated: 2024/11/08 20:02:41 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
int	ft_printf(char const *format, ...);
int	ft_putcharInt(char c);
int	ft_putstrInt(char *s);
int	ft_putnbrInt(int n);
int	ft_putnbrUn(unsigned int n);
int	ft_upperHex(int n);
int	ft_lowerHex(int n);
int	ft_voidHex(void *c);

#endif