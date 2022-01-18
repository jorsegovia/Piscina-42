/* **************************************************************************** */
/* Create a function that returns 1 if the string given as a parameter contains */
/*    only numeric characters, and 0 if it contains any other character    */
/* **************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	numeric;
	int	c;

	c = 0;
	numeric = 0;
	while (str[c] != '\0')
	{
		if (str[c] < '0' || str[c] > '9')
		{
			numeric = 0;
			return (numeric);
		}
		else
			numeric = 1;
		c++;
	}
	return (numeric);
}

int	main(void)
{
	char	str1[] = "1234";
	char	str2[] = "abCD12*+-=";
	int		result = 0;
	
	printf("\n\nContent of str1: %s", str1);
	result = ft_str_is_numeric(&str1[0]);
	printf("\nIs str1 numeric: %d", result);
	printf("\n\nContent of str2: %s", str2);
	result = ft_str_is_numeric(&str2[0]);
	printf("\nIs str2 numeric: %d", result);
}