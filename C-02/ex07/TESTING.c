/* **************************************************************************** */
/*         Create a function that transforms every letter to uppercase          */
/* **************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
			str[counter] = str[counter] - 32; 
		counter++;
	}
	return (str);
}

int	main(void)
{
	char	str1[] = "abcde";
	char	str2[] = "ab12cd34";
	
	printf("\n\nContent of str1: %s", str1);
	ft_strupcase(&str1[0]);
	printf("\nAfter transformation: %s", str1);
	printf("\n\nContent of str2: %s", str2);
	ft_strupcase(&str2[0]);
	printf("\nAfter transformation: %s", str2);
}