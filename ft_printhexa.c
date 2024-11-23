/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudd <ielmoudd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 23:16:30 by ielmoudd          #+#    #+#             */
/*   Updated: 2024/11/22 17:49:02 by ielmoudd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa(unsigned long number, char c)
{
	int	n;

	n = 0;
	if (number >= 16)
		n += ft_printhexa(number / 16, c);
	if (c == 'x')
		n += ft_putchar("0123456789abcdef"[number % 16]);
	else
		n += ft_putchar("0123456789ABCDEF"[number % 16]);
	return (n);
}
