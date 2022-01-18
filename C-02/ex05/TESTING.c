/* **************************************************************************** */
/* Create a function that returns 1 if the string given as a parameter contains */
/*    only upperrcase characters, and 0 if it contains any other character    */
/* **************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	uppercase;
	int	c;

	c = 0;
	uppercase = 1;
	while (str[c] != '\0')
	{
		if (str[c] < 'A' || str[c] > 'Z')
		{
			uppercase = 0;
			return (uppercase);
		}
		else
			uppercase = 1;
		c++;
	}
	return (uppercase);
}

int	main(void)
{
	char	str1[] = "ABCD";
	char	str2[] = "abcd12";
	int		result = 0;
	
	printf("\n\nContent of str1: %s", str1);
	result = ft_str_is_uppercase(&str1[0]);
	printf("\nIs str1 uppercase: %d", result);
	printf("\n\nContent of str2: %s", str2);
	result = ft_str_is_uppercase(&str2[0]);
	printf("\nIs str2 uppercase: %d", result);
}