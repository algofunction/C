/*
Ecrire une fonction affichant 'N' ou 'P' suivant le signe de l'entier passé en paramètre.
Si n est négatif alors afficher 'N'. 
Si n est positif ou nul alors afficher 'P'.
*/

#include <unistd.h>

void	ft_is_negative(int n) {
  if (n >= 0)
  {
    write(1, "P", 1);
	}
  else
  {
    write(1, "N", 1);
	}
}
