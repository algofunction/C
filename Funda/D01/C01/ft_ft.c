/*Instructions

Écrire une fonction qui prend un pointeur
sur int en paramètre et donne à l’int la valeur de 42.
*/

// Solution

#include <stdio.h>

void	ft_ft(int *p)
{
	*p = 42;
}

int	main(void)
{
	int n;

	n = 1492;
	printf("Before-> %d\n", n);
	ft_ft(&n);
	printf("After-> %d\n", n);
}
