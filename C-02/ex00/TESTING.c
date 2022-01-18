/* ************************************************************ */
/* Reproduce the behavior of the function strcpy (man strcpy) */
/* ************************************************************ */
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		printf("\n %c Should be overwritten to  %c", dest[counter], src[counter]);
		dest[counter] = src[counter];
		counter++;
		printf("\n And has been overwritten to: %c\n", dest[counter]);
	}
	dest[counter] = 0;
	return (dest);
}

int	main(void)
{
	char	dest[] = "abcdefghi";
	char	dest2[] = "abcdefghi";
	char	src[] = "ABCD";
	char	src2[] = "ABCD";

	printf("\nContent of dest before: %s", dest);
	ft_strcpy(&dest[0], &src[0]);
	printf("\nContent of dest after: %s", dest);

	printf("\nContent of dest2 before: %s", dest2);
	strcpy(&dest2[0], &src2[0]);
	printf("\nContent of dest2 after: %s", dest2);
}