/* **************************************************************************** */
/* Create a function that returns 1 if the string given as a parameter contains */
/*    only printable characters, and 0 if it contains any other character    */
/* **************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	printable;
	int	c;

	c = 0;
	printable = 1;
	while (str[c] != '\0')
	{
		if (str[c] < 32 || str[c] > 126)
		{
			printable = 0;
			return (printable);
		}
		else
			printable = 1;
		c++;
	}
	return (printable);
}

int	main(void)
{
	char	str1[] = "1Ab +[";
	char	str2[] = "å≠";
	int		result = 0;
	
	printf("\n\nContent of str1: %s", str1);
	result = ft_str_is_printable(&str1[0]);
	printf("\nIs str1 printable: %d", result);
	printf("\n\nContent of str2: %s", str2);
	result = ft_str_is_printable(&str2[0]);
	printf("\nIs str2 printable: %d", result);
}