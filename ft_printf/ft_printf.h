/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:35:35 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/23 19:13:57 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdbool.h>
# include <stdint.h>

void	ft_putchar(char c, int *len);
void	ft_putstr(char *s, int *len);
void	ft_putnbr(int n, int *len);
void	ft_puthex(unsigned int a, char format, int *len);
void	ft_unsigned(unsigned int a, int *len);
void	ft_pointer(uintptr_t ptr, int *len);
void	ft_handle_format(va_list *args, char c, int *len);
int		ft_printf(const char *format, ...);

#endif