#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(char c);

int main ()
{
	printf("************* ft_isalnum **********************\n");
	int i;

	i = -10;
	while (i < 530)
	{
		// if (!!ft_isalnum(i) != !!isalnum(i))
		 	printf("i:%d (%c) | %d | %d\n", i, i, ft_isalnum(i)-1, isalnum(i)-1);

		//printf("i:%d | %d | %d\n", i, ft_isalnum(i)-1, isalnum(i)-1);

		// if (ft_isalnum(i) == 0 && isalnum(i) != 0)
		// 	printf("i:%d (%c) | %d | %d\n", i, i, ft_isalnum(i), isalnum(i));

		// if (ft_isalnum(i) == 1 && isalnum(i) == 0)
		// 	printf("BBBB:%d (%c) | %d | %d\n", i, i, ft_isalnum(i), isalnum(i));
		i++;
	}
}