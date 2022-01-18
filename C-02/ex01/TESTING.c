/* ************************************************************ */
/* Reproduce the behavior of the function strncpy (man strncpy) */
/* ************************************************************ */
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] != '\0' && counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}

int	main(void)
{
	char	dest[] = "abcdefghijklmno";
	char	src[] = "01234567";
	char	dest2[] = "abcdefghijklmno";
	char	src2[] = "01243567";
	
	unsigned int n = 5;

	printf("\nContent of dest before: %s", dest);
	ft_strncpy(&dest[0], &src[0],n);
	printf("\nContent of dest after: %s", dest);

	printf("\nContent of dest2 before: %s", dest2);
	strncpy(&dest2[0], &src2[0],n);
	printf("\nContent of dest2 after: %s", dest2);
}