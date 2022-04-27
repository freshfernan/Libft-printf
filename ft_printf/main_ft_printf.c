/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefernan <fefernan@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:18:00 by fefernan          #+#    #+#             */
/*   Updated: 2022/04/27 11:50:23 by fefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	c;
	int		n;
	char	*str;

	c = 99;
	n = 1988;
	str = "string";

	ft_printf("hello, mi printf imprime:  %c, %d, %s\n", c, n, str);
	return(0);
}
