#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
	int a = 10;
	int *ptr;
	int **ptr1;
	int ***ptr2;
	int ****ptr3;
	int *****ptr4;
	int ******ptr5;
	int *******ptr6;
	int ********ptr7;

	ptr7 = &ptr6;
	ptr6 = &ptr5;
	ptr5 = &ptr4;
	ptr4 = &ptr3;
	ptr3 = &ptr2;
	ptr2 = &ptr1;
	ptr1 = &ptr;

	ptr = &a;

	printf("%d\n", a);
	ft_ultimate_ft(&ptr7);
	printf("%d\n", a);
}