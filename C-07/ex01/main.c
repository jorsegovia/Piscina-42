/* ************************************************************ */
/*   Create a function ft_range which returns an array ofints   */
/* This int array should contain all values between min and max */
/*                 Min included - max excluded                  */
/* ************************************************************ */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min1 = 1;
	int	max1 = 5;
	int	*dst = NULL;

	printf("\n\nMin 1: %d \tMax 1: %d", min1, max1);
	dst = ft_range(min1, max1);
	printf("\nDst array: \n");
	if (dst)
	{
		for (int i = 0; dst[i] != '\0'; ++i)
			printf("%d, ", dst[i]);
	}
	free(dst);

	return (0);
}