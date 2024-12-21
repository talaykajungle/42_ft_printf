/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:26:21 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/21 19:40:55 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_format(va_list *args, char c)
{
	if (c == 's')
		return (ft_putstr(va_arg((*args), char)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg((*args), int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg((*args), unsigned int), 'x'));
	else if (c == 'u')
		return (ft_unsigned(va_arg((*args), int)));
	else if (c == 'p')
		return (ft_pointer(va_arg(*args, void *)));
	else if	(c == '%')
		return (ft_putchar(va_arg(*args, char), '%'));
}

int	ft_printf(char *format, ...)
{
	va_list args; // For declaration of list or arguments
	unsigned int i;
	int count = 0;

	i = 0;
	va_start(args, format);
	// Here we are starting the first list from the format
	while (*format != '\0') // We start with a loop
	{
		if (*format == '%') // checking for format specifier
		{
			format++; // Moves to the next character
			count += ft_handle_format(&args, *format);
		}
		else // If not format specifier, print character
		{
			count += ft_putchar(*format); // Print character and update count
		}
		format++; // Move to the next character in the format string
	}
	va_end(args);   // Clean up the variable argument list
	return (count); // Return the total count of printed characters
}