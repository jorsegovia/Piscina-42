/* **************************************************************************** */
/*   Create a function that takes a pointer to pointer to pointer to pointer    */
/* to pointer to pointer to pointer to pointer to pointer to int as a parameter */
/*                 and sets the value "42" to that int                          */
/* **************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	nbr;
	int	*ptr1;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;
	int	*********ptr9;

	nbr = 0;
	ptr1 = &nbr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	ptr9 = &ptr8;
	printf("\nvalue before: %d", nbr);
	ft_ultimate_ft(ptr9);
	printf("\nvalue after: %d", nbr);
}
