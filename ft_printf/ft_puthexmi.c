/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexmi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefernan <fefernan@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:56:45 by fefernan          #+#    #+#             */
/*   Updated: 2022/05/09 19:07:58 by fefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_hex(unsigned int n, char c, size_t j)
{
	char	*hexmi;

	hexmi = "0123456789abcdef";
	if (n > 0)
	{
		j = ft_hex (n / 16, c, j);
		j = j + 1;
		write (1, &hexmi [n % 16], 1);
	}
	return (j);
}

size_t	ft_puthexmi(unsigned int n, size_t j)
{
	if (n == 0)
	{
		write (1, "0", 1);
		j = j + 1;
	}
	else
		j = ft_hex (n, 'x', j);
	return (j);
}
