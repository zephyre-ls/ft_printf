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

int	ft_printadress(int	adress)
{
	long int	*p;
	
	p = NULL;
	p = write(1, "0x", 2);

	ft_printhexaminus(adress);
	p = p + adress;
	return ((int )p);
}

#include <stdio.h>

int	main(void)
{
	char test = 'c';
	ft_printadress(test);
}
