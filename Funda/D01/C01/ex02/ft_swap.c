/*
Écrire une fonction qui échange le contenu de deux entiers dont les adresses sont
données en paramètres.
*/

// Solution
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
