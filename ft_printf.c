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

int ft_checkarg(va_arg type, char *c)
{

	if (var_arg == "%c")
		ft_printchar(c);
	if (va_arg == "%s")
		ft_printstr(c);
	if (va_arg == "%p")
		ft_printadress( );
	if (va_arg == "%d");
		ft_printnbr( );	
	if (va_arg == "%i");
		ft_printnbr( );
	if (va_arg == "%u")

	if (va_arg == "%x") // hexademical en minuscule
		ft_printnbrhexaminus( )
	if (va_arg == "%X") // hexadecimal en maj
		ft_printnbrhexamaj( );
	if (va_arg == "%%") 
		ft_printchar('%');


int	ft_printf(const char *format, ...) 
{
	va_start

	ft_checkarg(va_arg) 

	va_end
}


int	main(void)
{
	char	testchar = 'S';
	char	teststr = "ceci est un test";
	int	testi = 2
	char test
	ft_printf("voici le resultat d un c = %c", test);
	return(0);
}
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
