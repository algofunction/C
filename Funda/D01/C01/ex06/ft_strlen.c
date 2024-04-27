/*Instructions

Écrire une fonction qui compte le nombre de caractères dans 
une chaîne de caractères et qui retourne le nombre trouvé.
*/

#include <unistd.h>

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
