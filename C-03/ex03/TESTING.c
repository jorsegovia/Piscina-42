/* ************************************************************ */
/*       Reproduce the behaviour of the function strncat        */
/* append at most n of the null-terminated string s2 to the end */
/* of the null-terminated string s1, then add a terminating \0  */
/* ************************************************************ */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strncat(char *str1, char *str2, unsigned int nb)
{
	unsigned int	c1;
	unsigned int	c2;

	c1 = 0;
	c2 = 0;
	while (str1[c1])//Llegar al final de str1
		c1++;
	while (str2[c2] && c2 < nb)//Llenar str1 con str2 mientras no se llegue a nb
	{
		str1[c1 + c2] = str2[c2];
		c2++;
	}
	str1[c1 + c2] = '\0';
	return (str1);
}

int main (void)
{
	char	str1[100] = "abcde";
	char	str2[] = "AB3DE";
	char	str3[100] = "abcde";
	char	str4[] = "AB3DE";
	int	comp = 2;

	printf("\nComp numb: %d", comp);
	printf ("\n\nArrays are:\n\tstr1: %s \n\tstr2: %s", str1, str2);
	printf ("\nEl resultado es: %s", ft_strncat(str1, str2, comp));

	printf ("\n\nArrays are:\n\tstr3: %s \n\tstr4: %s", str3, str4);
	printf ("\nEl resultado de strcat es: %s", strncat(str3, str4, comp));
	return (0);
}