#include <stdio.h>

//char	*ft_itoa(int n);

void maketest_itoa(int number)
{
	char *str;

	str = ft_itoa(number);
	printf ("number:%d - string:%s\n", number, str);
	free(str);
}

int main(void)
{
	printf ("\n\n************** TESTE ITOA **************\n");
	maketest_itoa(12);
	maketest_itoa(123);
	maketest_itoa(1234);
	maketest_itoa(-1234);
	maketest_itoa(-0);
	maketest_itoa(-0);
	maketest_itoa(2147483647);
	maketest_itoa(-2147483648);
}