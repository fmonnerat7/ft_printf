/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femonner <femonner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:44:16 by femonner          #+#    #+#             */
/*   Updated: 2022/04/28 11:53:51 by femonner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_lowcase(unsigned int n);
int	ft_pntr(unsigned long long n);
int	ft_printf(const char *s, ...);
int	putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_unsdec(unsigned int n);
int	ft_upcase(unsigned int n);

#endif
