/* ************************************************** */
/* Create a program that displays its given arguments */
/* ************************************************** */

#include <unistd.h>

void	ft_write(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write(1, &str[counter], 1);
		counter++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int		counter;
	char	*str;

	counter = 1;
	while (counter < argc)
	{
		str = argv[counter];
		ft_write(str);
		counter++;
	}
	return (0);
}
