#include <string.h>
#include <stdio.h>

void		*ft_memccpy(void *dest, const void *src, int c, size_t n);

int					main(void)
{
	printf("************* ft_memccpy **********************\n");

	char src[] = "test basic du memccpy !";
	char buff1[22];
	char buff2[22];

	memset(buff1, 0, sizeof(buff1));
	memset(buff2, 0, sizeof(buff2));

	char *r1 = memccpy(buff1, src, 'a', 22);
	char *r2 = ft_memccpy(buff2, src, 'a', 22);
    
	printf("System:%p | %s | %s | %p\n", r1, buff1, src, memccpy(buff1, src, 'a', 22));
	printf("Romeu :%p | %s | %s | %p\n", r2, buff2, src, memccpy(buff2, src, 'a', 22));
}

