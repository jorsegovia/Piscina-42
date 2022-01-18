/* ******************************************************************************* */
/* Create a function that displays the number entered as a parameter. The function */
/*    has to be able to display all possible values within an int type variable    */
/* ******************************************************************************* */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(char *str);
/*
int	ft_atoi(char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str == '\t' || *str == '\n' || *str == '\r'
		|| *str == '\v' || *str == '\f' || *str == ' ')
		++str;
	while (*str == '-' || *str == '+')//si es + o - pasa al siguiente
	{
		if (*str == '-')//si es negativo multiplica el acumulativo por -1
			negative = negative * -1;
		++str;
	}
	while (*str && *str >= '0' && *str <= '9')//si es numero entra
	{
		res = res * 10 + (*str - 48);//multiplica el resultado, 0 para la primera vueta, por 10 y añade el numero actual
		++str;
	}
	return (res * negative);
}
*/
int	main(void)
{
	char	test1[50] = "------+--+asfag42fas";
	char	test2[50] = "-5555";

	printf ("\n\n\tINTs are:\ntest1: %s \ntest2: %s\n\nWriting:", test1, test2);
	printf ("\n\tINT1 is: %d", ft_atoi(test1));
	printf ("\n\tatoi of INT1 is: %d", atoi(test1));
	printf ("\n\tINT2 is: %d", ft_atoi(test2));
	printf ("\n\tatoi of INT2 is: %d", atoi(test2));
}

/*
int	ft_atoi(char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str)
	{
		if (*str == '\t' || *str == '\n' || *str == '\r'
			|| *str == '\v' || *str == '\f' || *str == ' ')
			++str;
		if (*str == '-' || *str == '+')//si es + o - pasa al siguiente
		{
			if (*str == '-')//si es negativo multiplica el acumulativo por -1
				negative = negative * -1;
		}
		if (*str && *str >= '0' && *str <= '9')//si es numero entra
		{
			res = res * 10 + (*str - 48);//multiplica el resultado, 0 para la primera vueta, por 10 y añade el numero actual
		}
		++str;
	}
	return (res * negative);
}*/