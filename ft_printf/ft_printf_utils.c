/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:43:14 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/23 18:47:59 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned(unsigned int a, int *len)
{
	if (a >= 10)
		ft_unsigned(a / 10, len);
	ft_putchar(a % 10 + '0', len);
}

void	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_putstr(char *s, int *len)
{
	int	index;

	index = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		*len += 6;
		return ;
	}
	while (s[index] != '\0')
	{
		ft_putchar(s[index], len);
		index++;
	}
}

void	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*len += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', len);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, len);
	}
	ft_putchar((n % 10) + '0', len);
}
