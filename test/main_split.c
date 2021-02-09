#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//char		**ft_split(char const *s, char c);

int main()
{
	printf("\n******** Testing 05 - ft_split **********\n");
	char *source;
	char charset;
	char **result;
	int i;

	source = ft_strdup("  romeu  beatriz mariana rita*");
	charset = ' ';
	printf("SOURCE: \"%s\"    DELEMITER:\"%c\"\n", source, charset);
	result = ft_split(source, charset);

	i = 0;
	while(result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(source);
	free(result[0]);
	free(result[1]);
	free(result[2]);
	free(result[3]);
	free(result);
	
	
	source = ft_strdup("**romeu**ro*meu***");
	charset = '*';
	printf("SOURCE: \"%s\"    DELEMITER:\"%c\"\n", source, charset);
	result = ft_split(source, charset);
	
	i = 0;
	while(result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(source);
	free(result[0]);
	free(result[1]);
	free(result[2]);
	free(result);
	
	source = strdup("..a..");
	charset = '.';
	printf("SOURCE: \"%s\"    DELEMITER:\"%c\"\n", source, charset);
	result = ft_split(source, charset);
	
	i = 0;
	while(result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(source);
	free(result[0]);
	free(result);



	source = strdup("");
	charset = '.';
	printf("SOURCE: \"%s\"    DELEMITER:\"%c\"\n", source, charset);
	result = ft_split(source, charset);
	
	i = 0;
	while(result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(source);
	free(result);


	source = strdup("tripouille");
	charset = 0;
	printf("SOURCE: \"%s\"    DELEMITER:\"%c\"\n", source, charset);
	result = ft_split(source, charset);
	i = 0;
	while(result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(source);
	free(result[0]);
	free(result);

}