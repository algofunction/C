/*
Ecrire une fonction affichant 'N' ou 'P' suivant le signe de l'entier passé en paramètre.
Si n est négatif alors afficher 'N'. 
Si n est positif ou nul alors afficher 'P'.
*/

#include <unistd.h>
 
int ft_putchar(char letter) 
{
    write( 1, &letter, 1 );
    
    return 0;
}
 
void ft_is_negative (int n)
{
    if (n>=0)
    {
    	ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
 
int main() 
{
    ft_is_negative(4568);
    
    return 0;
}
