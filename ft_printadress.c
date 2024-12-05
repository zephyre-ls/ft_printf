/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadress.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:57:21 by lduflot           #+#    #+#             */
/*   Updated: 2024/12/04 15:02:07 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Adresse du pointeur =
// %p
// prefixe 0x (indique que les valeurs apres sont ecritent en hexadecimal 
// &
//
int	ft_printadress(char *adress) 
{
	/*
	1 - Afficher adresse avec &
	2 - Ajouter le prefixe 0x
	3 - Conversion en hexadecimal minus

Besoin de = ft_printfhexaminus 
						ft_printstr 
*/
	char *p;

	*p = &adress;
	*p = ft_printhexaminus;
	return(*p);
}
/*
#include <stdio.h>

int	main(void)
{
	char test = 'c';


}*/
