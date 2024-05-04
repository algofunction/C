/*Instructions :
Écrire une fonction qui affiche un nombre passé en paramètre. La fonction devra
être capable d’afficher la totalité des valeurs possibles dans une variable de type
int.
*/

// Solution
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int main(int argc, const char *argv[])
{
	int i;

	i = -100;

	while (i != 500)
	{
		ft_putnbr(i);
		ft_putchar(' ');
		i+= 50;
	}
	return 0;
}
