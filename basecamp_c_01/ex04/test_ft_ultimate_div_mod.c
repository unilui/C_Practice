#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a = 31;
	int b = 2;

	printf("%d / %d:\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Divisão = %d\n", a);
	printf("Resto da divisão = %d\n", b);
}