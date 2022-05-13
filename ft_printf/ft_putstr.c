/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefernan <fefernan@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:37:38 by fefernan          #+#    #+#             */
/*   Updated: 2022/05/09 18:45:13 by fefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(char *str, size_t j)
{	
	size_t	n;
	size_t	len;

	n = 0;
	len = 0;
	if (str == NULL)
	{
		write (1, "(null)", 6);
		j = j + 6;
		return (j);
	}
	while (str[len])
		len++;
	while (n < len)
	{
		write (1, (str + n), 1);
		n++;
		j++;
	}
	return (j);
}
