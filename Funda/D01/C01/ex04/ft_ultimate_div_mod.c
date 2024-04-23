/*Instructions :

Écrire une fonction ft_ultimate_div_mod qui divise les int pointés par a et b.
Le résultat de la division est stocké dans l’int pointé par a.
Le résultat du reste de la division est stocké dans l’int pointé par b.
*/

// Solution :
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int resultat;
	int reste;

	resultat = *a / *b;
	reste = *a % *b;
	*a = resultat;
	*b = reste;
}
