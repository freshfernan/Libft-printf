/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefernan <fefernan@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:20:50 by fefernan          #+#    #+#             */
/*   Updated: 2022/05/09 19:07:35 by fefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
size_t	ft_selector(char format, va_list ptr, size_t j);
size_t	ft_putchar(char c, size_t j);
size_t	ft_putstr(char *str, size_t j);
size_t	ft_putptr(void *ptr, size_t j);
size_t	ft_putint(int n, size_t j);
size_t	ft_putuint(unsigned int n, size_t j);
size_t	ft_puthexma(unsigned int n, size_t j);
size_t	ft_puthexmi(unsigned int n, size_t j);

#endif
