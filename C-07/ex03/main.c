/* ************************************************ */
/*      Write a function that will concatenate      */
/* all the strings pointed by strs separated by sep */
/*      size is the number of strings in strs       */
/* if size is 0, it should a freeable empty string  */
/* ************************************************ */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

void	ft_putstr(char *str)
{
	while (str)
	{
		write(1, &str, 1);
		str++;
	}
}

int	main(void)
{
	char	sep;
	char	strs[3];
	char	result;

	sep = " - ";
	strs[0] = "aaa";
	strs[1] = "bbb";
	strs[2] = "ccc";
	printf("\n\nLos str son: %s / %s / %s", strs[1], strs[2], strs[3]);
	printf("\nEl separador es: %s", sep);

	printf("\nEl resultado es: \n");
	result = ft_strjoin(sizeof(strs), *strs, &sep);
	ft_putstr(result);
	result = ft_strjoin(sizeof(strs), *strs, &sep);
	ft_putstr(result);

	return(0);
}