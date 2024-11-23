/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudd <ielmoudd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 23:16:46 by ielmoudd          #+#    #+#             */
/*   Updated: 2024/11/16 23:16:47 by ielmoudd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long ptr)
{
	if (!ptr)
		return (write(1, "(nil)", 5));
	return (ft_putstr("0x") + ft_printhexa(ptr, 'x'));
}
