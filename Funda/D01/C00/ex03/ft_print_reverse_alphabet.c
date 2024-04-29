/*Ecrire une fonction affichant l'alphabet en minuscule sur une seule ligne, dans
l'ordre décroissant, à partir de la lettre 'z'.*/

#include <unistd.h>

void ft_putchar(char z) {
        write(1, &z, 1);
}

void ft_print_reverse_alphabet(void) {
        char i = 'z';
        while(i >= 'a') {
                ft_putchar(i);
                i--;
        }
}


int main(void)
{
        ft_print_reverse_alphabet();
        return 0;
}











