/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <femonner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:51:43 by femonner          #+#    #+#             */
/*   Updated: 2022/04/28 11:55:56 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(char s, va_list *arg)
{
	if (s == 'i' || s == 'd')
		return (ft_putnbr(va_arg(*arg, int)));
	else if (s == 'c')
		return (ft_putchar(va_arg(*arg, int)));
	else if (s == 's')
		return (ft_putstr(va_arg(*arg, char *)));
	else if (s == 'p')
		return (ft_pntr(va_arg(*arg, unsigned long long)));
	else if (s == 'u')
		return (ft_unsdec(va_arg(*arg, unsigned int)));
	else if (s == 'x')
		return (ft_lowcase(va_arg(*arg, unsigned int)));
	else if (s == 'X')
		return (ft_upcase(va_arg(*arg, unsigned int)));
	else if (s == '%')
		return (write (1, "%%", 1));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		aux;

	va_start(arg, s);
	aux = 0;
	while (s && *s)
	{
		if (*s == '%')
			aux += check(*++s, &arg);
		else
			aux += write(1, s, 1);
		s++;
	}
	va_end(arg);
	return (aux);
}
