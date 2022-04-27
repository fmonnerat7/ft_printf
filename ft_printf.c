/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <femonner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:51:43 by femonner          #+#    #+#             */
/*   Updated: 2022/04/11 18:07:14 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *s, ...)
{
	int	aux;
	va_list args;

	aux = 0;
	va_start(args, s);
	while (*s)
	{
		//va_arg(args, char *);
		aux += write(1, s, 1);
		s++;
	}
	va_end(args);
	return (aux);
}
