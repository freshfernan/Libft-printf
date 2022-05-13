/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexma.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefernan <fefernan@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:52:59 by fefernan          #+#    #+#             */
/*   Updated: 2022/05/09 19:08:35 by fefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_hex(unsigned int n, char c, size_t j)
{
	char	*hexma;

	hexma = "0123456789ABCDEF";
	if (n > 0)
	{
		j = ft_hex (n / 16, c, j);
		j = j + 1;
		write (1, &hexma [n % 16], 1);
	}
	return (j);
}

size_t	ft_puthexma(unsigned int n, size_t j)
{
	if (n == 0)
	{
		write (1, "0", 1);
		j = j + 1;
	}
	else
		j = ft_hex (n, 'X', j);
	return (j);
}
