/* **************************************************** */
/* Create a function that returns the next prime number */
/*   greater or equal to the number given as argument   */
/* **************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);
int ft_find_next_prime(int nb);
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
}

int ft_find_next_prime(int nb)
{
	int count;

	count = 1;
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb + count))
		++count;
	return (nb + count);
}*/

int main(void)
{
	int nb = 80;

	printf("\n\nComprobar si el numero es primo: %d", nb);
	printf("\nel numero si es primo el siguiente si no: %d", ft_find_next_prime(nb));
	return(0);
}