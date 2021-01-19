#include <stdio.h>
#include <ctype.h>

//int	ft_toupper(char c);

int main(void)
{
	printf("************* ft_toupper **********************\n");

	int i;

	i = -100;
	while (i < 530)
	{
		printf("i:%3d %c - ft:%c | system:%c\n", i, i, ft_toupper(i), toupper(i));
		i++;
	}
}