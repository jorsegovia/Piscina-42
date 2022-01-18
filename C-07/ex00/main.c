/* ********************************************************** */
/* Reproduce the behavior of the function strdup (man strdup) */
/* ********************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_getlen(char *str);
char	*ft_strdup(char *src);
/*
int	ft_getlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strdup(char *src)
{
	int	counter;
	int	size;
	char	*pnt;

	counter = 0;
	size = ft_getlen(src);
	pnt = malloc(size);

	while (counter < size)
	{
		pnt[counter] = src[counter];
		counter++;
	}
	return (pnt);
}
*/
int	main(void)
{
	char	src1[] = "0123456789";
	char	*dst1 = NULL;
	char	src2[] = "abcd\n\tEFGH";
	char	*dst2 = NULL;

	printf("\n\nSrc array 1: %s", src1);
	dst1 = strdup(src1);
	printf("\nDst array 1: %s", dst1);
	free(dst1);

	printf("\n\nSrc array 2: %s", src2);
	dst2 = ft_strdup(src2);
	printf("\nDst array 2: %s", dst2);
	free(dst2);

	return (0);
}