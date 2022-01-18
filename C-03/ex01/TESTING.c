/* *********************************************** */
/* Reproduce the behaviour of the function strncmp */
/* *********************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;
	unsigned int	r;

	c = 0;
	r = 0;
	while ((s1[c] != '\0' || s2[c] != '\0') && c < n)
	{
		printf("\nCompare %c with %c", s1[c], s2[c]);
		if (s1[c] != s2[c])
		{
			r = s1[c] - s2[c];
			break ;
		}
		c++;
	}
	return (r);
}

int main (void)
{
	char	str1[] = "abcde";
	char	str2[] = "ab9de";
	char	str3[] = "abc42";
	int	comp = 3;
	int	result = 0;

	printf("\nComp numb: %d", comp);
	printf("\n\nArrays are:\n\tstr1: %s \n\tstr2: %s", str1, str2);
	result = ft_strncmp(str1, str2, comp);
	printf("\n\nEl resultado es: %d", result);

	result = strncmp(str1, str2, comp);
	printf("\nEl resultado de strncmp es: %d", result);

	printf("\n\nArrays are:\n\tstr1: %s \n\tstr2: %s", str1, str3);
	result = ft_strncmp(str1, str3, comp);
	printf("\n\nEl resultado es: %d", result);

	result = strncmp(str1, str3, comp);
	printf("\nEl resultado de strncmp es: %d", result);
	return (0);
}