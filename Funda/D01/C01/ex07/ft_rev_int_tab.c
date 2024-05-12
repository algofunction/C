#include <stdio.h>
#include <stdlib.h>

void	swap(int *p, int *p1);

void	ft_rev_int_tab(int *tab, int size)
{
	int		swaps;
	int		i;

	i = 0;
	swaps = size / 2;
	while (swaps--)
		swap(&(*(tab + i++)), &(tab[--size]));
}

int	main()
{
	int		v[10];

	for (int i=0; i<10; ++i)
		v[i] = rand()%101;	
	
	printf("\nBEFORE\n");
	for (int i=0; i<10; i++)
		printf("%d ", v[i]);
	printf("\n");
		
	ft_rev_int_tab(v, sizeof(v)/sizeof(v[0]));

	printf("\nAFTER\n");
	for (int i=0; i<10; i++)
		printf("%d ", v[i]);
	printf("\n\n");
	
}

void	swap(int *p, int *p1)
{
	int		tmp;

	tmp = *p;
	*p = *p1;
	*p1 = tmp;
}
