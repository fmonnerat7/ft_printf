/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <femonner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:40:50 by femonner          #+#    #+#             */
/*   Updated: 2022/04/28 11:49:04 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	conversor(unsigned int n, char *base, unsigned int len)
{
	int	aux;

	aux = 0;
	if (n > (len - 1))
	{
		aux += conversor((n / len), base, len);
	}
	write(1, &base[(n % len)], 1);
	return (aux + 1);
}

int	ft_unsdec(unsigned int n)
{
	int	aux;

	aux = 0;
	aux += conversor(n, "0123456789", 10);
	return (aux);
}
