#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(void)
{
	printf ("\n\n************** TESTE STRJOIN **************\n");
	
	char *s1;
	char *s2;

	s1 = ft_strdup("Romeu");
	s2 = ft_strdup("Rita");
	char *s = ft_strjoin(s1, s2);

	printf ("s1 - %s | strlen:%ld, | malloc:%ld\n", s1, ft_strlen(s1), malloc_usable_size(s1));
	printf ("s1 - %s | strlen:%ld, | malloc:%ld\n", s2, ft_strlen(s2), malloc_usable_size(s2));
	printf ("s1 - %s | strlen:%ld, | malloc:%ld\n", s, ft_strlen(s), malloc_usable_size(s));
	free (s);
	free (s1);
	free (s2);
}