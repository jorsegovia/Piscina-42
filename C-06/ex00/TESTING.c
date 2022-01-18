/* ******************************************* */
/* Create a program that displays its own name */
/* ******************************************* */

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
}

int	main(int argc, char *argv[])
{
	argc++;
	ft_write(argv[0]);
	write(1, "\n", 1);
	return (0);
}