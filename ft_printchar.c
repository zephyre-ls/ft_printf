#include "ft_print.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int ft_printchar(char c)
{
	write(1, &c, 1);
	return (c)
}

int	ft_printstr(char *str)
{
	int i;
	while(str[i])
	{
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}
//permet d afficher un entier int en char
char ft_printnbr(int nb)
{
	int long n,
	
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

int	ft_printnbrhexaminus(int nb) %x
{

}

//En hexadecimal il y a 16 chiffres, 0 a 9 puis de 10 a 15 
//avantage= format compact 
//10=A 11=B 12=C 13=D 14=E 15=F
int	ft_printnbrhexamaj(int nb); %X
{

	// REGARDER NEGATIF NBR HEXA
	int long n,
	
	n = nb;
	if (n < 0)
	{
		ft_printchar('-');
		ft_printnbr(n * (-1));
	}
	else if (n >= 0 && n <= 9)
		ft_printchar(n + '0');
	else if (n >= 10 et n <= 15)
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
		ft_printnbr(n / 16);
		ft_printnbr(n % 16);
	}
return (nb);
}
//convertie une chaine de caractere contenant des chiffres en entier
int	ft_atoi(const char *c)
{
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

int ft_printadress( )
{

}
