/* ******************************************************************************* */
/* Create a function that displays the number entered as a parameter. The function */
/*    has to be able to display all possible values within an int type variable    */
/* ******************************************************************************* */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_write(char nb);
void	ft_putnbr(int nb);
/*
void	ft_write(char nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= 2147483647 && nb >= -2147483648)
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		else if (nb < 0 && nb > -10)
		{
			write(1, "-", 1);
			nb *= -1;
			ft_write(nb + '0');
		}
		else if (nb <= -10)
		{
			nb *= -1;
			write(1, "-", 1);
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
			ft_write(nb + '0');
	}
}
*/
int	main(void)
{
	int	test1 = -2147483648;
	int	test2 = 42;

	printf("\n\nINTs are:\ntest1: %d \ntest2: %d", test1, test2);
	printf("\n\nWritting test1: \n");
	ft_putnbr(test1);
	printf("\n\nWritting test2: \n");
	ft_putnbr(test2);
}