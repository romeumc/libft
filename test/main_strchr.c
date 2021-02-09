#include <stdio.h>
#include <string.h>

void maketest_strchr(char *s, int c)
{
	printf("pc:%s - my:%s\n", strchr(s, c), ft_strchr(s, c));
}


int main(void)
{
	printf ("\n\n************** TESTE STRCHR **************\n");
	
	char s[] = "tripouille";
	maketest_strchr(s, 't' + 256);
	maketest_strchr(s, 'i');
}