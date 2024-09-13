#include <unistd.h>

int ft_putchar(int n)
{
    write( 1, &n, 1 );
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
        ft_is_negative(4);
        return 0;
}

