/*Ecrire une fonction affichant l'alphabet en minuscule sur  une seule ligne */

#include <unistd.h>

void	ft_putchar(char c) {
  write(1, &c, 1);
}

void	ft_print_alphabet(void) {
	char i = 'a';
	while(i <= 'z') {
		ft_putchar(i);
		i++;
	}
}
