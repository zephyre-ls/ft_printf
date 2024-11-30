/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:53:11 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/29 13:53:13 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
# define
# include <stdarg.h>
# include <unistd.h>
# include "libft.h"
# include "ft_printf.h"

int	ft_printf(const char *, ...);
int	ft_atoi(const char *nptr);
void	va_start(va_list ap, last);
void	va_copy(va_list dest, va_list src);
void	va_arg(va_list apm type);
void	va_end(va_list ap);


#endif
