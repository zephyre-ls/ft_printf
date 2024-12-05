/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:53:11 by lduflot           #+#    #+#             */
/*   Updated: 2024/12/04 16:10:09 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include "ft_printf.h"

int	ft_printf(const char *, ...);
int	ft_printhexamaj(int nb);
int	ft_printhexaminus(int nb);
char	ft_printnbr(int nb);
char	ft_printchar(char c);
char	ft_printstr(char *str);
int	ft_atoi(const char *nptr);
int	ft_printadress(char *adress);
char	ft_printnbrunsigned(int nb);
//void	va_start(va_list ap, last);
//void	va_copy(va_list dest, va_list src);
//type	va_arg(va_list ap, type);
//void	va_end(va_list ap);

#endif
