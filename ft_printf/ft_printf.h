/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:35:35 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/22 21:14:47 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
// # include <unistd.h>
# include <stdbool.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_puthex(unsigned int a, char format);
int	ft_unsigned(unsigned int a);
int	ft_pointer(void *ptr);
int	ft_handle_format(va_list *args, char c);
int	ft_printf(const char *format, ...);

#endif