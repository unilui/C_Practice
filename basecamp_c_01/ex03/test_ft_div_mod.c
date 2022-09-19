#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a = 31;
	int b = 2;
	int div;
	int remainder;

	ft_div_mod(a, b, &div, &remainder);
	printf("%d / %d:\n", a, b);
	printf("Divisão = %d\n", div);
	printf("Resto da divisão = %d\n", remainder);
}