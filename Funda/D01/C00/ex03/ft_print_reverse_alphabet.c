/*Ecrire une fonction affichant l'alphabet en minuscule sur une seule ligne, dans
l'ordre décroissant, à partir de la lettre 'z'.*/

#include <stdio.h>

main{}

void ft_print_reverse_alphabet(void){

  
}


#include <unistd.h>

void	ft_putchar(char c) {
  write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void) {
	char i = 'z';
	while(i >= 'a') {
		ft_putchar(i);
		i--;
	}
}











