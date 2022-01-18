/* ************************************************************* */
/* Create a function that takes a pointer to int as a parameter, */
/*	 			   and sets the value "42" to that int.		   	*/
/* ************************************************************* */

#include <stdio.h>
#include <unistd.h> 
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	nbr;

	nbr = 0;
	printf("\nvalue before: %d", nbr);
	ft_ft(&nbr);
	printf("\nvalue after: %d", nbr);
}
