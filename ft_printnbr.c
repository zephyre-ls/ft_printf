/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:51:40 by lduflot           #+#    #+#             */
/*   Updated: 2024/12/03 13:59:09 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

char ft_printnbr(int nb)
{
	long int	n,
	
	n = nb;
	if (n < 0)
	{
		ft_printchar('-');
		ft_printnbr(n * (-1));
	}
	else if (n >= 0 && n <= 9)
		ft_printchar(n + '0');
	else
	{
		ft_printnbr(n / 10);
		ft_printnbr(n % 10);
	}
return (nb);
}
