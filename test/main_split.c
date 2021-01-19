#include <stdlib.h>
#include <stdio.h>

//char		**ft_split(char const *s, char c);

int main()
{
	printf("\n******** Testing 05 - ft_split **********\n");
	char *source;
	char charset;
	char **result;
	int i;

	source = "  romeu  beatriz mariana rita*";
	charset = ' ';
	printf("SOURCE: \"%s\"    DELEMITER:\"%c\"\n", source, charset);
	result = ft_split(source, charset);

	i = 0;
	while(result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);
	
	
	source = "**romeu**ro*meu***";
	charset = '*';
	printf("SOURCE: \"%s\"    DELEMITER:\"%c\"\n", source, charset);
	result = ft_split(source, charset);
	
	i = 0;
	while(result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);
	
	source = "..a..";
	charset = '.';
	printf("SOURCE: \"%s\"    DELEMITER:\"%c\"\n", source, charset);
	result = ft_split(source, charset);
	
	i = 0;
	while(result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);



	source = "";
	charset = '.';
	printf("SOURCE: \"%s\"    DELEMITER:\"%c\"\n", source, charset);
	result = ft_split(source, charset);
	
	i = 0;
	while(result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	free(result);

}