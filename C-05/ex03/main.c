/**************************************************************** */
/* Create an recursive function that returns the value of a power */
/*                      applied to a number                       */
/* An power lower than 0 returns 0. Overflows must not be handled */
/* ************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);
/*
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
*/

/*
nb * ft_r_power(nb, power / 2) * ft_r_power(nb, power / 2)
*/

int main(void)
{
	int	nb = 5;
	int power = 5;

	printf("\nNumber to power: %d \n\t to the: %d\n", nb, power);
	printf("\n\nResult is: %d", ft_recursive_power(nb, power));
	return (0);
}