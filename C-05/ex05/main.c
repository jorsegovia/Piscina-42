/* *************************************************************** */
/*   Create a function that returns the square root of a number    */
/* (if it exists), or 0 if the square root is an irrational number */
/* *************************************************************** */

#include <math.h>
#include <stdio.h>

int	ft_sqrt(int nb);
/*
int	ft_sqrt(int nb)
{
	float	count;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	count = 1;
	while (count * count < nb)
	{
		++count;
	}
	if (count * count == nb)
		return (count);
	return (0);
}*/

int main (void)
{
	int nb = 1048576;

	printf("\n\nLa raiz cuadrada de: %d \nes: %d", nb, ft_sqrt(nb));
	printf("\n\nLa raiz cuadrada de: %d \nes: %f", nb, sqrt(nb));
	return (0);
}