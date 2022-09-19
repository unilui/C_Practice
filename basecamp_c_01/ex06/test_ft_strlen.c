#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char	a [] = "Quarante-deux";
	char	b [] = "Human Coder";
	int		a_len;
	int		b_len;

	a_len = ft_strlen(a);
	b_len = ft_strlen(b);

	printf("%s\nLength: 13 -> %d\n", a, a_len);
	printf("%s\nLength: 11 -> %d\n", b, b_len);
}