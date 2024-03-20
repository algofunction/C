/*ft_putchar
Ecrire une fonction affichant un caractère passé en paramètre.
Pour afficher le caractère, utiliser la fonction write.
*/

 
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
