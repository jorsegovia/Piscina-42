/* ************************************************** */
/* Create an iterative function that returns a number */
/* This number is the result of a factorial operation */
/*      based on the number given as a parameter      */
/* ************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb);
/*
int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb - 1;
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	while (fact > 1)
	{
		nb = nb * fact;
		fact--;
	}
	return (nb);
}
}*/

int main(void)
{
	int	nb = 0;
	printf("\nNumber to factorice: %d", nb);
	printf("\n\nResult is: %d", ft_iterative_factorial(nb));
	return (0);
}
