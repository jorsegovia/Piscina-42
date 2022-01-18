/* ****************************************************************************** */
/* Create a function that counts and returns the number of characters in a string */
/* ****************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(char *s);
/*int	ft_strlen(char *s)
{
	int	l;

	l = 0;
	while (s[l] != '\0')
		l++;
	return (l);
}*/

int	main(void)
{
	char	str1[20] = "abcDE";
	char	str2[20] = "0123456789";
	int	l;

	printf ("\n\nArrays are:\n\tstr1: %s \n\tstr2: %s", str1, str2);
	l = ft_strlen(str1);
	printf ("\nLenght of str1 is: %d", l);
	l = ft_strlen(str2);
	printf ("\nLenght of str2 is: %d", l);
}