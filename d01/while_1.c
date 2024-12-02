#include <stdio.h>

int main()
{
int a;
printf("entrer une valeur entre 50 et 100\n");
scanf_s("%d", &a);
while( a < 50 || a > 100 ){
  printf("le nombre doit être entre 50 et 100\n");
  scanf_s("%d", &a);
  rewind(stdin);
}
printf("valeur entree : %d\n", a);
return 0;
}
