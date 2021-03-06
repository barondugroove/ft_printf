/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:35:32 by bchabot           #+#    #+#             */
/*   Updated: 2022/04/27 14:47:07 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (!ptr)
	{
		len += ft_putstr("(nil)");
		return (len);
	}
	len += ft_putstr("0x");
	len += ft_putnbr_base(ptr, "0123456789abcdef");
	return (len);
}
