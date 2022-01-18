/* ********************************************************** */
/* Reproduce the behavior of the function strcmp (man strcmp) */
/* ********************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *str1, char *str2)
{
	unsigned int	c;
	unsigned int	r;

	c = 0;
	r = 0;
	while (str1[c] != '\0' || str2[c] != '\0')
	{
		if (str1[c] != str2[c])
		{
			r = str1[c] - str2[c];
			break ;
		}
		c++;
	}
	return (r);
}

int	main (void){

	char	str1[] = "abcde";
	char	str2[] = "ab8de";
	char	str3[] = "abcde";

	int	result = 0;
	printf ("\n\nArrays are: \n\tstr1: %s \n\tstr2: %s", str1, str2);
	result = ft_strcmp(str1, str2);
	printf ("\n\nEl resultado es: %d", result);

	result = strcmp(str1, str2);
	printf ("\nEl resultado de strcmp es: %d", result);

	printf ("\n\nArrays are: \n\tstr1: %s \n\tstr2: %s", str1, str3);
	result = ft_strcmp(str1, str3);
	printf ("\n\nEl resultado es: %d", result);

	result = strcmp(str1, str3);
	printf ("\nEl resultado de strcmp es: %d", result);
	return (0);
}