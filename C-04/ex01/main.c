/* ***************************************************************************** */
/* Create a function that displays a string of characters on the standard output */
/* ***************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str);
/*void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
}*/

int	main(void)
{
	char	str1[20] = "abcDE";
	char	str2[20] = "1234";

	printf ("\n\n Arrays are:\n\tstr1: %s \n\tstr2: %s\n\nWriting: \n", str1, str2);
	ft_putstr(str1);
	write(1,"\n",1);
	ft_putstr(str2);
}