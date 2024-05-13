/* Ecrire une fonction affichant tous les chiffres sur une seule ligne, dans l'ordre croissant.*/

#include <unistd.h>

void	ft_print_numbers(void)
{
	short	n;

	n = 47;
	while (++n < 58)
		write(1, &n, 1);
}

void	ft_print_numbers2(void)
{
	char	n;

	n = '/';
	while (++n < ':')
		write(1, &n, 1);
}

int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	ft_print_numbers2();
	write(1, "\n", 1);
}
