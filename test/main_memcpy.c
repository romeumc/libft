#include <string.h>
#include <stdio.h>

void		*ft_memcpy(void *dest, const void *src, size_t n);

int					main(void)
{

	printf("************* ft_memcpy **********************\n");
	char *r1 = ft_memcpy(((void*)0), ((void*)0), 3);
    printf("Romeu :%s | %p\n", r1, ft_memcpy(((void*)0), ((void*)0), 3));
	//printf("System:%p", memcpy(((void*)0), ((void*)0), 3));
}
