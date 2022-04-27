/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 21:06:20 by bchabot           #+#    #+#             */
/*   Updated: 2022/04/26 21:09:17 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putnbr_base(unsigned long long n, char *base);
int		ft_putnbr(int n);
int		ft_putnbr_u(unsigned int n);
int		ft_putstr(char *s);
int		ft_putptr(unsigned long long ptr);
size_t	ft_strlen(const char *s);

#endif
