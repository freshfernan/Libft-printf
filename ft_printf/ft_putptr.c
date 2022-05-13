/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefernan <fefernan@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:19:33 by fefernan          #+#    #+#             */
/*   Updated: 2022/05/09 11:53:42 by fefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_hexa(size_t n, char c, size_t j)
{
	char	*hexmi;
	char	*hexma;

	hexmi = "0123456789abcdef";
	hexma = "0133456789ABCDEF";
	if (n > 0)
	{
		if (c == 'X')
		{
			j = ft_hexa (n / 16, c, j);
			j = j + 1;
			write (1, &hexma [n % 16], 1);
		}
		else
		{
			j = ft_hexa (n / 16, c, j);
			j = j + 1;
			write (1, &hexmi [n % 16], 1);
		}
	}
	return (j);
}

size_t	ft_putptr(void *ptr, size_t j)
{
	size_t	n;

	n = (size_t) ptr;
	write (1, "0x", 2);
	if (n == 0)
	{
		write (1, "0", 1);
		j = j + 3;
	}
	else
		j = 2 + ft_hexa (n, 'p', j);
	return (j);
}
