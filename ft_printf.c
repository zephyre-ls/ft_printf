/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduflot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:22:49 by lduflot           #+#    #+#             */
/*   Updated: 2024/12/05 11:29:37 by lduflot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_checkarg(const char type, va_list *arg)
{
	if (type == 'c')
		ft_printchar(va_arg(*arg, int));
	else if (type == 's')
		ft_printstr(va_arg(*arg, char *));
	else if (type == 'p')
		ft_printadress(va_arg(*arg, char *));
	else if (type == 'd')
		ft_printnbr(va_arg(*arg, int));
	else if (type == 'i')
		ft_printnbr(va_arg(*arg, int));
	else if (type == 'u')
		ft_printnbrunsigned(va_arg(*arg, int));
	else if (type == 'x')
		ft_printhexaminus(va_arg(*arg, int));
	else if (type == 'X')
		ft_printhexamaj(va_arg(*arg, int));
	else if (type == '%')
		ft_printchar(va_arg(*arg, int));
	return (type);
}

int	ft_printf(const char *type, ...)
{
	va_list	arg;
	int		i;
	int		print;

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
	return (print);
}
/*
#include <stdio.h>

int	main(void)
{
	char	testchar = 'S';
	char	teststr[50] = "ceci est un test";
	int	testhexaminus = 255;
	int	testhexamaj = 255;
	char	testpourcent = '%';
	char	testadresse[200] = "trouve mon adresse";
	int testdecimal = 100;
	int testint = 100;
	int testunsigned = 100000000; 
	//valeur max unsigned int =  4294967295, si user ecrit neg renvoie la valeur max

	char testpointeur[10] = "adresse";

	ft_printf("voici le resultat d un c = %c\n", testchar);
	ft_printf("voici le resultat d un s = %s\n", teststr);
	ft_printf("voici le resultat d un x = %x\n", testhexaminus);
	ft_printf("voici le resultat d un X = %X\n", testhexamaj);
	ft_printf("voici le resultat d un % = %%\n", testpourcent);
	ft_printf("voici le resultat d un p = %p\n", testadresse);
	ft_printf("voici le resultat d un d = %d\n", testdecimal);
	ft_printf("voici le resultat d un i = %i\n", testint);
	ft_printf("voici le resultat d un u = %u\n", testunsigned);
	
	ft_printf("voici le c %c\n voici le s %s\n", testchar, teststr);
	printf("voici le resultat d un p = %p\n", testpointeur);
	return(0);
}*/

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
