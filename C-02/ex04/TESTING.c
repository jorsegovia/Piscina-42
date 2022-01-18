/* **************************************************************************** */
/* Create a function that returns 1 if the string given as a parameter contains */
/*    only lowercase characters, and 0 if it contains any other character    */
/* **************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	lowercase;
	int	c;

	c = 0;
	lowercase = 1;
	while (str[c] != '\0')
	{
		if (str[c] < 'a' || str[c] > 'z')
		{
			lowercase = 0;
			return (lowercase);
		}
		else
			lowercase = 1;
		c++;
	}
	return (lowercase);
}

int	main(void)
{
	char	str1[] = "abcd";
	char	str2[] = "abcd12";
	int		result = 0;
	
	printf("\n\nContent of str1: %s", str1);
	result = ft_str_is_lowercase(&str1[0]);
	printf("\nIs str1 lowercas: %d", result);
	printf("\n\nContent of str2: %s", str2);
	result = ft_str_is_lowercase(&str2[0]);
	printf("\nIs str2 lowercas: %d", result);
}