/* **************************************************************************** */
/*         Create a function that transforms every letter to lowercase          */
/* **************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
			str[counter] = str[counter] + 32; 
		counter++;
	}
	return (str);
}

int	main(void)
{
	char	str1[] = "ABCDE";
	char	str2[] = "AB12CD34";
	
	printf("\n\nContent of str1: %s", str1);
	ft_strlowcase(&str1[0]);
	printf("\nAfter transformation: %s", str1);
	printf("\n\nContent of str2: %s", str2);
	ft_strlowcase(&str2[0]);
	printf("\nAfter transformation: %s", str2);
}