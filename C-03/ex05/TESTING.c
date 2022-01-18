/* ********************************************** */
/* Reproduce the behavior of the function strlcat */
/* ********************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	ft_getlen(char *s)
{
	int	l;

	l = 0;
	while (s[l] != '\0')
		l++;
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				d_l;
	int				s_l;
	int				c;
	unsigned int	buffer;

	//obtener tamaños
	d_l = ft_getlen(dest);
	s_l = ft_getlen(src);
	//buffer para empezar al final de dest
	buffer = d_l;
	c = 0;
	//bucle para añadir src al final de dest
	while (src[c] != '\0')
	{
		dest[buffer] = src[c];
		buffer++;
		c++;
		//copiar todos los caracteres menos 1
		if (buffer == (size - 1))
			break ;
	}
	//finalizar el string
	dest[c] = '\0';
	return (d_l + s_l);
}

int	main(void)
{
	char	str1[] = "abcDE";
	char	str2[] = "abc";
	char	str3[] = "abcDE";
	char	str4[] = "abc";
	int	result;
	int	size = 2;

	printf ("\n\n Arrays are:\n\tstr1: %s \n\tstr2: %s\n", str1, str2);
	result = ft_strlcat(str1, str2, size);
	printf ("\n Result is: %d", result);

	printf ("\n\n Arrays are:\n\tstr3: %s \n\tstr4: %s\n ", str3, str4);
	result = strlcat(str3, str4, size);
	printf ("\n Result is: %d", result);
	return (0);
}