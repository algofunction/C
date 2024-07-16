#include<unistd.h>

void ft_putchar(char i) {
        write(1, &i, 1);
}

void ft_print_alphabet(void) {
        char i = 'a';
        while(i <= 'z'){
                ft_putchar(i);
                i++;
                '\n';
        }
}

char main(void)
{
        ft_print_alphabet();
        return 0;
}
~      
