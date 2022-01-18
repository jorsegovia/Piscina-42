/* *********************************************** */
/* Reproduce the behaviour of the function strnstr */
/* *********************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str1, char *str2)
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = 0;
	if (*str2 == '\0')	//si no hay str2; devolver el primero
		return (str1);
	while (str1[c1])	//recorrer el str1 paso a paso
	{
		while (str2[c2] == str1[c1 + c2])	//si son iguales continua recorriendo str2
		{
			if (str2[c2 + 1] == '\0')	//final de str2 devuelve el puntero a la posicion str[c1]
			{
				return (&str1[c1]);
			}
			c2++;
		}
		c1++;
	}
	return (0);
}

/*
char	*ft_strstr(char *str1, char *str2)
{
	int c1;
	int c2;

	c1 = 0;
	c2 = 0;
	if (*str2 == '\0')	//si no hay str2; devolver el primero
		return (str1);
	while (str1[c1])	//recorrer el str1 paso a paso
	{
		while (str2[c2] == str1[c1 + c2])	//si son iguales continua recorriendo str2
		{
			if (str2[c2 + 1] == '\0')	//final de str2 devuelve el puntero a la posicion str[c1]
			{
				return (str1 + c1);
			}
			c2++;
		}
		c1++;
	}
	return (0);
}
*/
int	main(void)
{
	char	str1[] = "abcDA8DEabc";
	char	str2[] = "A8DE";
	char	str3[] = "abcDA8DEabc";
	char	str4[] = "A8DE";
	char	*result;

	printf ("\n\n Arrays are:\n\tstr13: %s \n\tstr14: %s", str1, str2);
	result = strstr(str1, str2);
	printf ("\n El resultado de str1str1 es: %s", result);

	printf ("\n\n Arrays are:\n\tstr11: %s \n\tstr12: %s", str3, str4);
	result = ft_strstr(str3, str4);
	printf ("\n El resultado es: %s", result);
	return (0);
}
