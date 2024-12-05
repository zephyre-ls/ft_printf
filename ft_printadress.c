/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadress.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:57:21 by lduflot           #+#    #+#             */
/*   Updated: 2024/12/05 11:19:49 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

//Adresse du pointeur =
// %p
// prefixe 0x (indique que les valeurs apres sont ecritent en hexadecimal 
// &

int	ft_len(char *adress)
{
	int i;

	i = 0;
	while (adress[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*char	ft_mallocadress(char *adress)
{
	int len;
	char adresse;

	len = ft_len(adress);
	adresse = malloc(sizeof(int *) * len + 2); 
	return (adresse);
}*/

int	ft_printadress(char adress) 
{
	/*
	1 - Afficher adresse avec &
	2 - Ajouter le prefixe 0x
	3 - Conversion en hexadecimal minus

Besoin de = ft_printfhexaminus 
						ft_printstr 
*/
	char *p;
	p = &adress;
	p = ft_printhexaminus(&adress);
	//while (adress != '\0')
//	{
		

	//}
	
	//write(1, "0x", 2);
	return(p);
}

#include <stdio.h>

int	main(void)
{
	char test = 'c';
	ft_printadress(test);

}
