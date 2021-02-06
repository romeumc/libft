#include <stdio.h>
#include <string.h>

int main()
{
	printf ("\nTesting ft_strcmp\n");

	// char *s1 = "the cake is a lie !\0I'm hidden lol\r\n";
	// char *s2 = "there is no stars in the sky";
	// int i1 = ((strcmp(s1, s2) > 0) ? 1 : ((strcmp(s1, s2) < 0) ? -1 : 0));
	// int i2 = ((ft_strcmp(s1, s2) > 0) ? 1 : ((ft_strcmp(s1, s2) < 0) ? -1 : 0));
	// printf("i1:%d | i2:%d | strcmp:%d | ft:%d", i1, i2, strcmp(s2, s1), ft_strcmp(s2, s1));


	char *s1 = "omg1";
	char *s2 = "omg3";
	int i1 = ((strcmp(s1, s2) > 0) ? 1 : ((strcmp(s1, s2) < 0) ? -1 : 0));
	int i2 = ((ft_strcmp(s1, s2) > 0) ? 1 : ((ft_strcmp(s1, s2) < 0) ? -1 : 0));
	printf("i1:%d | i2:%d | strcmp:%d | ft:%d", i1, i2, strcmp(s1, s2), ft_strcmp(s1, s2));
}
