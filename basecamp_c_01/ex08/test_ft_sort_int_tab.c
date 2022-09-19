#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int a[] = {6, 5, 4, 2, 3, 1, 0};
	int b[] = {845, 123, 48729, 2365, 2, 0};
	int i;

	i = 0;
	while (i <= 6)
	{
		printf("%d | ", a[i]);
		i++;
	}
	printf("\n");
	
	ft_sort_int_tab(a, 7); // Reversão
	
	i = 0;
	while (i <= 6)
	{
		printf("%d | ", a[i]);
		i++;
	}
	printf("\n=======================================\n");

	i = 0;
	while (i <= 5)
	{
		printf("%d | ", b[i]);
		i++;
	}
	printf("\n");
	
	ft_sort_int_tab(b, 6); // Reversão
	
	i = 0;
	while (i <= 5)
	{
		printf("%d | ", b[i]);
		i++;
	}
	printf("\n");
}