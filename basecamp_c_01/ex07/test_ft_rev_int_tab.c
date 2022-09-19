#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6};
	int b[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;

	i = 0;
	while (i <= 6)
	{
		printf("%d | ", a[i]);
		i++;
	}
	printf("\n");
	
	ft_rev_int_tab(a, 7); // Reversão
	
	i = 0;
	while (i <= 6)
	{
		printf("%d | ", a[i]);
		i++;
	}

	printf("\n=======================================\n");

	i = 0;
	while (i <= 9)
	{
		printf("%d | ", b[i]);
		i++;
	}
	printf("\n");
	
	ft_rev_int_tab(b, 10); // Reversão
	
	i = 0;
	while (i <= 9)
	{
		printf("%d | ", b[i]);
		i++;
	}
	printf("\n");
}