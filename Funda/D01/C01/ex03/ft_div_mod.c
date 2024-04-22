/*Instructions

Écrire une fonction ft_div_mod qui divise deux paramètres a et b 
et stocke le resultat dans l’int pointé par div.

Elle stocke le reste de la division de a et b dans l’int pointé par mod.
*/

// Solution
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
