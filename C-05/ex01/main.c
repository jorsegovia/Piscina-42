/**************************************************** */
/* Create an recursive function that returns a number */
/* This number is the result of a factorial operation */
/*      based on the number given as a parameter      */
/* ************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb);
/*
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 1)
		printf("\n\tcurrent nb: %d", nb);
		nb = nb * ft_recursive_factorial(nb-1);

	return (nb);
}*/

int	main(void)
{
	int	nb = 5;
	
	printf("\nNumber to factorice: %d", nb);
	printf("\n\nResult is: %d", ft_recursive_factorial(nb));
	return 0;
}
