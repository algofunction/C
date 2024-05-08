/*
Écrire une fonction qui échange le contenu de deux entiers dont les adresses sont
données en paramètres.
*/

// Solution
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main()
{
	int	a = 23;
	int	b = 44;
	ft_swap(&a, &b);
	printf("%d %d", a, b);
	return (0);
}
