/*ft_putchar
Ecrire une fonction affichant un caractère passé en paramètre.
Pour afficher le caractère, utiliser la fonction write.
*/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
        write(1, &c, 1);
}

char main()
{
        ft_putchar('a');
        ft_putchar('\n');
        putchar('a');
        putchar('\n');
}
