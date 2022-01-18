/* ************************************************************** */
/* Create a function which allocates and assigns an array of ints */
/*  This int array should contain all values between min and max  */
/*                  Min included - max excluded                   */
/*     The size of range should be returned (or -1 on error)      */
/*    If the value of min is greater or equal to max’s value,     */
/*        range will point on NULL and it should return 0         */
/* ************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	min1 = 1;
	int	max1 = 5;
	int	size = 0;

	printf("\n\nMin 1: %d \tMax 1: %d", min1, max1);
	size = ft_ultimate_range(min1, max1);
	printf("\nSize of array: %d", size);

	return (0);
}