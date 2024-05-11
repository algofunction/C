/* Ecrire une fonction affichant tous les chiffres sur une seule ligne, dans l'ordre croissant.*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>



void ft_putchar(char c) {
  write(1, &c, 1);
}


void ft_print_numbers(void) {
  int n;
  n = 0;

  while (n <= 9) {
    ft_putchar(n);
    n = n + 1;
    }
}

int main() {
  ft_print_numbers();
  return (0);
}
