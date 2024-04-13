/*Instructions:

Ecrire une fonction qui affiche toutes les différentes combinaisons de deux nombres
entre 0 et 99, dans l’ordre croissant*/

// Solution
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98 && b <= 99)
	{
		if (a < 10)
			ft_putchar('0');
		ft_putnbr(a);
		ft_putchar(' ');
		if (b < 10)
			ft_putchar('0');
		ft_putnbr(b);
		if (a != 98 || b != 99)
			write(1, ", ", 2);
		b++;
		if (b > 99)
		{
			a++;
			b = a + 1;
		}
	}
}
