/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexamaj.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:54:11 by lduflot           #+#    #+#             */
/*   Updated: 2024/12/03 13:58:27 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexamaj(int nb)
{
	long int n;
	n = nb;

	if (n < 0)
	{
		ft_printchar('-');
		ft_printhexamaj(n * (-1));
	}
	else if (n >= 0 && n <= 9)
		ft_printchar(n + '0');
	else if (n >= 10 && n <= 15)
	{
			if (n == 10)
				ft_printchar('A');
			if (n == 11)
				ft_printchar('B');
			if (n == 12)
				ft_printchar('C');
			if (n == 13)
				ft_printchar('D');
		if (n == 14)
				ft_printchar('E');
		if (n == 15)
				ft_printchar('F');
	}
	else
	{
		ft_printhexamaj(n / 16);
		ft_printhexamaj(n % 16);
	}
return (n);
}
