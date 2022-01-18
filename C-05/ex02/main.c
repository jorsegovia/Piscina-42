/**************************************************************** */
/* Create an iterated function that returns the value of a power  */
/*                      applied to a number                       */
/* An power lower than 0 returns 0. Overflows must not be handled */
/* ************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power);
/*
int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	base;

	base = nb;
	count = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	while (count < power - 1)
	{
		nb = nb * base;
		count++;
	}
	return (nb);
}
*/
int main(void)
{
	int	nb = 3;
	int power = 3;
	printf("\n\nNumber to power: %d \n\t to the: %d", nb, power);
	printf("\nResult is: %d", ft_iterative_power(nb, power));
	printf("\n\nNumber to power: %d \n\t to the: %d", -0, 0);
	printf("\nResult is: %d", ft_iterative_power(0, 0));
	printf("\n\nNumber to power: %d \n\t to the: %d", -0, 2);
	printf("\nResult is: %d", ft_iterative_power(-0, 2));
	printf("\n\nNumber to power: %d \n\t to the: %d", 10, -5);
	printf("\nResult is: %d", ft_iterative_power(10, -5));
	printf("\n\nNumber to power: %d \n\t to the: %d", -3910, -890);
	printf("\nResult is: %d", ft_iterative_power(-3910, -890));
	printf("\n\nNumber to power: %d \n\t to the: %d", -1882, 0);
	printf("\nResult is: %d", ft_iterative_power(-1882, 0));
	printf("\n\nNumber to power: %d \n\t to the: %d", -7, 7);
	printf("\nResult is: %d", ft_iterative_power(-7, 7));
	printf("\n\nNumber to power: %d \n\t to the: %d", -6, 9);
	printf("\nResult is: %d", ft_iterative_power(-6, 9));
	printf("\n\nNumber to power: %d \n\t to the: %d", -3, 10);
	printf("\nResult is: %d", ft_iterative_power(-3, 10));

	return (0);
}
