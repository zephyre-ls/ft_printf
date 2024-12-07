/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadress.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:57:21 by lduflot           #+#    #+#             */
/*   Updated: 2024/12/05 15:15:02 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

//Adresse du pointeur =
// %p
// prefixe 0x (indique que les valeurs apres sont ecritent en hexadecimal 
// &


int	ft_printadress(void	*adress)
{
	unsigned long int	p = (unsigned long)adress;
	
	p = write(1, "0x", 2);
	ft_printhexaminus(p);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char test = 'c';
	ft_printadress(test);
}*/
