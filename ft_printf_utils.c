/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:43:14 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/21 19:43:59 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	array[18];

	i = 0;
	if (fd == -1)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	while (n > 9)
	{
		array[i++] = n % 10;
		n /= 10;
	}
	array[i] = n;
	printi_minti(array, i, fd);
}

int	ft_puthex(unsigned int a, char format)
{
	int	ret;

	ret = 0;
	if (a >= 16)
		ret += ft_hex(a / 16, format);
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
