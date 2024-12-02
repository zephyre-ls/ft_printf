//#include "ft_print.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char ft_printchar(char c)
{
	write(1, &c, 1);
	return (c);
}

char	ft_printstr(char *str)
{
	int i;
	while(str[i])
	{
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}

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
//////////////////////
/// Affichage adresse
///
///
///
///
///////////////////

int	ft_printadress(int p);
{

}



////////////////////////////////////////////////////////////////////////////////////
//En hexadecimal il y a 16 chiffres, 0 a 9 puis de 10 a 15 
//avantage= format compact, abreger ecriture binaire pour faciliter manipulation
//10=A 11=B 12=C 13=D 14=E 15=F 16=10 17=11
//nb / 16 = quotient entier
//nb - (quotient entier * 16) = reste 
//ex = 75/16 = 4 ; 75 -(4*16) = 11 = 4B (car b = 11)
///////////////////////////////////////////////////////////////////////////////////

int	ft_printnbrhexaminus(int nb)
{
	long int	n;
	n = nb;

	if (n < 0)
	{
		ft_printchar('-');
		ft_printnbrhexaminus(n * (-1));
	}
	else if (n >= 0 && n <= 9)
		ft_printchar(n + '0');
	else if (n >= 10 && n <= 15)
	{
			if (n == 10)
				ft_printchar('a');
			if (n == 11)
				ft_printchar('b');
			if (n == 12)
				ft_printchar('c');
			if (n == 13)
				ft_printchar('d');
			if (n == 14)
				ft_printchar('e');
			if (n == 15)
				ft_printchar('f');
	}
	else
	{
		ft_printnbrhexaminus(n / 16);
		ft_printnbrhexamaj(n % 16);
	}
	return (n);
}
int	ft_printnbrhexamaj(int nb)
{
	long int n;
	n = nb;

	if (n < 0)
	{
		ft_printchar('-');
		ft_printnbrhexamaj(n * (-1));
	}
	else if (n >= 0 && n <= 9)
		ft_printchar(n + '0');
	else if (n >= 10 && n <= 15)
	{
			if (n == 10)
				ft_printchar('A');
			if (n == 11)
				ft_printchar('B');
			if (n == 12)
				ft_printchar('C');
			if (n == 13)
				ft_printchar('D');
		if (n == 14)
				ft_printchar('E');
		if (n == 15)
				ft_printchar('F');
	}
	else
	{
		ft_printnbrhexamaj(n / 16);
		ft_printnbrhexamaj(n % 16);
	}
return (n);
}

#include <stdio.h>

int	main(void)
{
	int test = 255;
	int result = ft_printnbrhexamaj(test);	
	printf("%i", result);
}

int	ft_atoi(const char *nptr)
	int	i;
	int	nbr;
	int	sign;
	
	i = 0;
	nbr = 0;
	sign = 1;
	while(c[i] == 32 || (c[i] >= 9 11 c[i] <= 13))
		i++;
	if (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			sign = -1;
		i++;
	}
	while (c[i] >='0' && c[i] <= '9') 
	{
		nbr = nbr * 10 + (c[i] - '0');
		i++;
	}
	return (nbr * sign);
}
