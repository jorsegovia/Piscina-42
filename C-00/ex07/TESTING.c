/* *************************************************************************************** */
/*		 Create a function that displays the number entered as a parameter.			  */
/* The function has to be able to display all possible values within an int type variable. */
/* *************************************************************************************** */

#include <unistd.h>
void	putchar(char nb)
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
			putchar(nb + '0');
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
			putchar(nb + '0');
	}
}

int	main(void)
{
	int	nb;

	nb = -42;
	ft_putnbr(nb);
}
