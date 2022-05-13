/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefernan <fefernan@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:59:09 by fefernan          #+#    #+#             */
/*   Updated: 2022/05/09 14:28:09 by fefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(long int n)
{
	int	c;

	c = 0;
	if (n == 0)
	{
		c = 1;
		return (c);
	}
	if (n < 0)
		c++;
	while (n != 0)
	{
		c++;
		n = n / 10;
	}
	return (c);
}

static char	*ft_neg(int n)
{
	char	*r;
	int		i;
	char	c;

	i = ft_count(n);
	r = (char *)malloc (sizeof (char) * (ft_count(n) + 1));
	if (r == NULL)
		return (NULL);
	r[i] = '\0';
	i--;
	if (n == -2147483648)
	{
		r[i] = '8';
		n = -214748364;
		i--;
	}
	n = -n;
	while (i >= 0)
	{
		c = (n % 10) + '0';
		r[i--] = c;
		n = n / 10;
	}
	r[0] = '-';
	return (r);
}

static char	*ft_pos(long int n)
{
	char	*r;
	int		i;
	char	c;

	i = ft_count(n);
	r = (char *)malloc (sizeof (char) * (ft_count(n) + 1));
	if (r == NULL)
		return (NULL);
	r[i] = '\0';
	i--;
	while (i >= 0)
	{
		c = (n % 10) + '0';
		r[i--] = c;
		n = n / 10;
	}
	return (r);
}

static char	*ft_itoa(int n)
{
	if (n < 0 && n >= -2147483648)
		return (ft_neg (n));
	else
		return (ft_pos(n));
}

size_t	ft_putint(int n, size_t j)
{
	size_t	i;
	size_t	len;
	char	*r;

	i = 0;
	len = 0;
	r = ft_itoa (n);
	while (r[len])
		len++;
	while (i < len)
	{
		write (1, &r[i], 1);
		i++;
		j = j + 1;
	}
	free (r);
	return (j);
}
