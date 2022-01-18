/* **************************************************************************** */
/* Create a function that returns 1 if the string given as a parameter contains */
/*    only alphabetical characters, and 0 if it contains any other character    */
/* **************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	alpha;
	int	c;

	c = 0;
	alpha = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 'A' || (str[c] > 'Z' && str[c] < 'a') || str[c] > 'z')
		{
			alpha = 0;
			return (alpha);
		}
		else
			alpha = 1;
		c++;
	}
	return (alpha);
}

int	main(void)
{
	char	str1[] = "abCD";
	char	str2[] = "abcDE12";
	int		result = 0;
	
	printf("\n\nContent of str1: %s", str1);
	result = ft_str_is_alpha(&str1[0]);
	printf("\nIs str1 alpha: %d", result);
	printf("\n\nContent of str2: %s", str2);
	result = ft_str_is_alpha(&str2[0]);
	printf("\nIs str2 alpha: %d", result);
}