/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:26:21 by tamutlu           #+#    #+#             */
/*   Updated: 2025/01/11 19:55:36 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_format(va_list *args, char c, int *len)
{
	if (c == 's')
		ft_putstr(va_arg(*args, char *), len);
	else if (c == 'c')
		ft_putchar(va_arg(*args, int), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(*args, int), len);
	else if (c == 'x')
		ft_puthex(va_arg(*args, unsigned int), 'x', len);
	else if (c == 'X')
		ft_puthex(va_arg(*args, unsigned int), 'X', len);
	else if (c == 'u')
		ft_unsigned(va_arg(*args, unsigned int), len);
	else if (c == 'p')
		ft_pointer(va_arg(*args, size_t), len);
	else if (c == '%')
		ft_putchar('%', len);
	return ;
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			ft_handle_format(&args, *format, &len);
			format++;
		}
		else
		{
			ft_putchar(*format, &len);
			format++;
		}
	}
	va_end(args);
	return (len);
}
