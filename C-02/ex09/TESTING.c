/* **************************************************************/
/* Create a function that transforms every letter to capitalize */
/*  the first letter of each word and all others to lowercase   */
/* ************************************************************ */
#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *s)
{
	int	c;
	int	p;

	c = 0;
	p = c - 1;
	/*
	while (s[c] != '\0')
	{
		//printf("\n\nPrevious: %c & actual: %c", s[p], s[c]);
		//previous is not a letter and actual is lowercase
		if ((s[p] < 'A' && s[c] > 'Z') || (s[p] <= 'a' && s[c] >= 'z'))
			if ((s[c - 1] < '0' && s[c] > '9'))
				if (s[c] >= 'a' && s[c] <= 'z')
					s[c] = s[c] - 32;
		//previous is a letter and actual is uppercase
		if ((s[p] >= 'A' && s[c] <= 'Z') || (s[p] >= 'a' && s[c] <= 'z'))
			if (s[c] >= 'A' && s[c] <= 'Z')
				s[c] = s[c] + 32;
		//printf("\nAfter: %c", s[c]);
		c++;
		p = c - 1;
	}
	*/
	//make every letter lowercase
	while (s[c] != '\0')
	{
		if (s[c] >= 'A' && s[c] <= 'Z')
			s[c] = s[c] + 32;
		c++;
	}
	c = 0;
	//make every first letter uppercase
	while (s[c] != '\0')
	{
		if ((s[p] < 'A' && s[c] > 'Z') || (s[p] < 'a' && s[c] > 'z'))
			if (s[p] < '0' && s[p] > '9')
				s[c] = s[c] - 32;
		c++;
	}
	return (s);
}

int	main(void)
{
	char	s1[] = "abcde";
	char	s2[] = "salut, :CComment tu : v-as ? 42Mots quarante-deux; cinquante+et+un";
	
	printf("\n\nContent of s1: %s", s1);
	ft_strcapitalize(&s1[0]);
	printf("\nAfter transformation: %s", s1);
	
	printf("\n\nContent of s2: %s", s2);
	ft_strcapitalize(&s2[0]);
	printf("\nAfter transformation: %s", s2);
}