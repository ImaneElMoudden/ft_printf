/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudd <ielmoudd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 23:16:38 by ielmoudd          #+#    #+#             */
/*   Updated: 2024/11/16 23:16:39 by ielmoudd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int number)
{
	unsigned int	n;
	int				count;

	count = 0;
	if (number < 0)
	{
		count += ft_putchar('-');
		n = -number;
	}
	else
		n = number;
	if (n < 10)
		count += ft_putchar(n + 48);
	else
	{
		count += ft_putnbr(n / 10);
		count += ft_putchar(n % 10 + 48);
	}
	return (count);
}
