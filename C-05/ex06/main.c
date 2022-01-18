/* **************************************************** */
/* Create a function that returns 1 if the number given */
/* as a parameter is a prime number, and 0 if it isn’t  */
/* **************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);
/*
int	ft_is_prime(int nb)
{
	int count;

	count = 2;
	if (nb <= 1)
		return (0);
	while (count < nb)
	{
		if (nb % count == 0)
			return (0);
		++count;
	}
	return(1);
}*/

int main(void)
{
	int nb = 17;

	printf("\n\nComprobar si el numero es primo: %d", nb);
	printf("\n1 si primo / 0 si no: %d", ft_is_prime(nb));
	return(0);
}