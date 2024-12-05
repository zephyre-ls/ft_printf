/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:53:11 by lduflot           #+#    #+#             */
/*   Updated: 2024/12/05 11:31:19 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include "ft_printf.h"

int		ft_printf(const char type*, ...);
int		ft_printhexamaj(int nb);
int		ft_printadress(char adress);
int		ft_printhexaminus(int nb);
char	ft_printnbr(int nb);
char	ft_printchar(char c);
char	ft_printstr(char *str);
char	ft_printnbrunsigned(int nb);

#endif
