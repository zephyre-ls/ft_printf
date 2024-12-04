/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:22:49 by lduflot           #+#    #+#             */
/*   Updated: 2024/12/03 17:05:16 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int ft_checkarg(const char type, va_list *arg)
{
	int count = 0;

	if (type == 'c')
		count = count + ft_printchar(va_arg(*arg, int));
	else if (type == 's')
		ft_printstr(va_arg(args, *char));
	else if (type == 'p')
		ft_printadress(va_arg(*arg, );
	else if (type == 'd')
		ft_printnbr(va_arg(*args, int));	
	else if (type == 'i')
		ft_printnbr(va_arg(*args, int));
	else if (type == 'u')
	else if (type == 'x')
		ft_printhexaminus(va_arg(*args, int));
	else if (type == 'X') 
		ft_printhexamaj(va_arg(*args, int));
	else if (type == '%') 
		ft_printchar(va_arg(args, char))
	return (count);
}

int	ft_printf(const char *type, ...) 
{
	va_list arg;
	int	i;
	int print;

	i = 0;
	print = 0;
	va_start(arg, type);
	while (type[i] != '\0') 
	{
		if (type[i] == '%')
		{
			i++;
			print = print + ft_checkarg(type[i], &arg);
		}
		else
		{
			print = print + ft_printchar(type[i]);
		}
		i++;
	}
	va_end(arg);
	return (count);
}


int	main(void)
{
	//char	tstchar = 'S';
	char	teststr = "ceci est un test";
//	int	testi = 2;

	ft_printf("voici le resultat d un c = %s", teststr);
	return(0);
}

/*
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
printf (man =  LANG=C man 3 printf )*/
