/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexamaj.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:54:11 by lduflot           #+#    #+#             */
/*   Updated: 2024/12/05 13:32:53 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printletter(long long int	nb)
{
	if (nb == 10)
		return (ft_printchar('A'));
	if (nb == 11)
		return (ft_printchar('B'));
	if (nb == 12)
		return (ft_printchar('C'));
	if (nb == 13)
		return (ft_printchar('D'));
	if (nb == 14)
		return (ft_printchar('E'));
	if (nb == 15)
		return (ft_printchar('F'));
	return (0);
}

int	ft_printhexamaj(long long int nb)
{
	int count;

	count = 0;
	if (nb == 0)
		return (write(1, "0", 1));
	if (nb < 0)
	{
		count = count + ft_printchar('-');
		nb = -nb;
	}
	else if (nb >= 0 && nb <= 9)
		count = count + ft_printchar(nb + '0');
	else if (nb >= 10 && nb <= 15)
		count = count + ft_printletter(nb);
	else
	{
		count = count + ft_printhexamaj(nb / 16);
		count = count + ft_printhexamaj(nb % 16);
	}
	return (count);
}
