/*Instructions

Écrire une fonction ft_div_mod qui divise deux paramètres a et b 
et stocke le resultat dans l’int pointé par div.

Elle stocke le reste de la division de a et b dans l’int pointé par mod.
*/

// Solution
#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
        *div = a / b;
        *mod = a % b;
}

int             main(void)
{
        int a;
        int b;
        int div;
        int mod;

        a = 10;
        b = 5;
        div = 0;
        mod = 0;
        ft_div_mod(a, b, &div, &mod);
        printf("%d\n%d\n", div, mod);
        return (0);
}
