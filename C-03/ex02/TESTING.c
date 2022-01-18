/* ************************************************************ */
/*        Reproduce the behaviour of the function strcat        */
/* append a copy of the null-terminated string s2 to the end of */
/*  the null-terminated string s1, then add a terminating `\0'  */
/* ************************************************************ */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcat(char *str1, char *str2)
{
	int	c;

	c = 0;
	while (str1[c])//Llegar al final de str1
		c++;
	while (*str2)//Llenar str1 con str2
		str1[c++] = *str2++;
	str1[c] = '\0';
	return (str1);
}

int main (void)
{
	char	str1[100] = "abcde";
	char	str2[] = "AB3DE";
	char	str3[100] = "abcde";
	char	str4[] = "AB3DE";

	printf ("\n\nArrays are:\n\tstr1: %s\n\tstr2: %s", str1, str2);
	ft_strcat(str1, str2);
	printf ("\nEl resultado es: %s", str1);

	printf ("\n\nArrays are:\n\tstr3: %s\n\tstr4: %s", str3, str4);
	strcat(str3, str4);
	printf ("\nEl resultado de strcat es: %s", str3);
	return (0);
}