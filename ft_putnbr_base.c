/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:07:06 by bchabot           #+#    #+#             */
/*   Updated: 2022/04/27 12:32:53 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr_base(unsigned long long n, char *base)
{
	int	i;
	int	len;

	i = ft_strlen(base);
	len = 0;
	if (n / i == 0)
	{
		len += ft_putchar(base[n % i]);
		return (len);
	}
	len += ft_putnbr_base((n / i), base);
	len += ft_putchar(base[n % i]);
	return (len);
}
