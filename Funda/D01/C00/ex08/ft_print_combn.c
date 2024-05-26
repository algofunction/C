/*Instructions
Écrire une fonction qui affiche toutes les différentes combinaisons de n chiffres dans l’ordre croissant.
n sera tel que : 0 < n < 10.*/

#include <stdio.h>

void combn(int start, int n, const char* s)
{
  if(n==0){
      printf("%s\n", s);
      return;
  }
  for(int i=start;i<=9;i++){
      char s2[11];
      sprintf(s2, "%s%i",s, i);
      combn(i+1,n-1, s2);
  }
}

void ft_print_combn(int n)
{
    if (n>=1 && n<=10)
      combn(0,n,"");
}

int main (int argc, char* args[])
{
    ft_print_combn(3);
}                                                                                                                                                                                                                                                            

