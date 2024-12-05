/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbrunsigned.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:03:33 by lduflot           #+#    #+#             */
/*   Updated: 2024/12/04 16:09:36 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char ft_printnbrunsigned(int nb)
{
	unsigned int n;

	n = nb;
	if (n >= 0 && n <= 9)
		ft_printchar(n + '0');
	else
	{
		ft_printnbr(n / 10);
		ft_printnbr(n % 10);
	}
return (n);
}

