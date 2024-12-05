/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexaminus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:52:40 by lduflot           #+#    #+#             */
/*   Updated: 2024/12/05 11:33:45 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//////////////////////////////////////////////////////////////////////////////
//En hexadecimal il y a 16 chiffres, 0 a 9 puis de 10 a 15 
//avantage= format compact, abreger ecriture binaire, facilite manipulation
//10=A 11=B 12=C 13=D 14=E 15=F 16=10 17=11
//nb / 16 = quotient entier
//nb - (quotient entier * 16) = reste 
//ex = 75/16 = 4 ; 75 -(4*16) = 11 = 4B (car b = 11)
/////////////////////////////////////////////////////////////////////////////

#include "ft_printf.h"

int	ft_printhexaminus(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_printchar('-');
		ft_printhexaminus(n * (-1));
	}
	else if (n >= 0 && n <= 9)
		ft_printchar(n + '0');
	else if (n >= 10 && n <= 15)
	{
		if (n == 10)
			ft_printchar('a');
		if (n == 11)
			ft_printchar('b');
		if (n == 12)
			ft_printchar('c');
		if (n == 13)
			ft_printchar('d');
		if (n == 14)
			ft_printchar('e');
		if (n == 15)
			ft_printchar('f');
	}
	else
	{
		ft_printhexaminus(n / 16);
		ft_printhexaminus(n % 16);
	}
	return (n);
}
