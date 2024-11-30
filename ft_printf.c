/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:22:49 by lduflot           #+#    #+#             */
/*   Updated: 2024/11/29 11:22:57 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...) 
{
	

}

printf("", )

int	main(void)
{
	char	test = 'S'

			 //convertir int en char putnbr 
			//convertir chat en int atoi 

	ft_printf("voici le resultat d un c = %c", test);
	return(0);
}



FONCTION VARIADIQUE = accepte un nombre variable d arguments contrairement au ft creer depuis le debut

void	va_start(va_list ap, last)
	= initialise ap pour les futures utilisations de vaarg et vaend. A appele en 1er.
	Param last = nom du dernier parametre donc la ft connait le type
	Adresse de ne doit pas etre declare comme une variable en registre, ni comme un type de fonction ou tableau
= commence a parcourir la liste d arguments passe a notre fonction
type	va_arg(va_list ap, type) 
						= recuperer un argument de cette liste a chaque appel
void	va_copy(va_list dest, va_list src)
permet de copier les listes d arguments 
void	va_end(va_list ap);
signaler qu on a fini de lire la liste d arguments


malloc
free

write


printf (man =  LANG=C man 3 printf )
% -> determine le format desortie
%c = single char 
%s = string 
%p = adresse pointeur
%d = decimal (base10) number 
%i = integer base 10
%u = unsigned decimal base 10 number 
%x = hexadecimal (base 16) lowercase format 
%X = hexadecimal (base 16) uppercase format 
%% = percent sign

