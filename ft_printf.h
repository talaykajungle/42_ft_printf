/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:35:35 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/19 16:49:36 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF.H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdarg.h>

int ft_printf(const char *, ...);

#endif