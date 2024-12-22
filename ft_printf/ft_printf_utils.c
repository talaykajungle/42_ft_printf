/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:43:14 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/22 21:31:56 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int a, char format)
{
	int	ret;

	ret = 0;
	if (a >= 16)
		ret += ft_puthex(a / 16, format);
	if (format == 'X')
		write(1, &"0123456789ABCDEF"[a % 16], 1);
	if (format == 'x')
		write(1, &"0123456789abcdef"[a % 16], 1);
	return (ret + 1);
}

int	ft_unsigned(unsigned int a)
{
	int	ret;

	ret = 0;
	if (a >= 10)
		ret += ft_unsigned(a / 10);
	write(1, &"0123456789"[a % 10], 1);
	return (ret + 1);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1)); // Returns the number of characters printed (1)
}

int	ft_putstr(char *s)
{
	int	count;

	if (!s)
	{
		return (write(1, "(null)", 6)); // Handle null string
	}
	count = 0;
	while (*s)
	{
		count += ft_putchar(*s++);
	}
	return (count); // Return the total count of characters printed
}

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		count += ft_putnbr(n / 10);
	}
	count += ft_putchar((n % 10) + '0');
	return (count); // Return the total count of characters printed
}
