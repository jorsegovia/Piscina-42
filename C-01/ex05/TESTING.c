/* ***************************************************************************** */
/* Create a function that displays a string of characters on the standard output */
/* ***************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1,&str[count],1);
        count++;
	}
}

int main()
{
	char str[] = "Marvin";
	ft_putstr(&str[0]);
}