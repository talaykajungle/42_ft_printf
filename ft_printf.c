/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:26:21 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/20 23:33:06 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

// int ft_format(va_list *args, char c)
// {
	
// }

int	ft_printf(char *format, ...)
{
	va_list args; // For declaration of list or arguments
	va_start(args, format); // Here we are starting the first list from the format

	// We start with a loop
	while (*format)
	{
		if (*format == '%')
			format++;
	}
	
	
}