/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 18:54:55 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/22 21:29:14 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *ptr)
{
	unsigned long	ret;
	int				res;
	char			hex_char;

	if (ptr == NULL)
		write(1, "nil", 4);
	ret = (unsigned long)ptr;
	res = 0;
	if (ret > 15)
		res += ft_pointer((void *)(ret / 16));
	hex_char = "0123456789abcdef"[ret % 16];
	write(1, &hex_char, 1);
	return (res + 1);
}
