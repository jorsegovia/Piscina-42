/* ****************************************************************************** */
/* Create a function that counts and returns the number of characters in a string */
/* ****************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int    ft_strlen(char *str)
{
    int count;

	count = 0;
	while (str[count] != '\0')
	{
        count++;
	}

    return (count);
}

int main()
{
   int len;
   char    str[] = "MARVIN";

   printf("\nString = %s", str);
   len = ft_strlen(&str[0]);
   printf("\nLength = %d", len);
}