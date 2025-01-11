/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 18:54:55 by tamutlu           #+#    #+#             */
/*   Updated: 2025/01/11 21:10:58 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer(uintptr_t ptr, int *len)
{
	char		str[sizeof(uintptr_t) * 2 + 1];
	int			i;
	const char	*hex_base;

	hex_base = "0123456789abcdef";
	i = 0;
	if (ptr == 0)
	{
		ft_putstr("(null)", len);
		return ;
	}
	if (write(1, "0x", 2) != 2)
		return ;
	(*len) += 2;
	while (ptr)
	{
		str[i++] = hex_base[ptr % 16];
		ptr /= 16;
	}
	while (i--)
		ft_putchar(str[i], len);
}
