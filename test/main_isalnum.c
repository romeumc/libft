#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(char c);
int	ft_isalpha(char c);
int	ft_isdigit(char c);

int main ()
{
	printf("************* ft_isalpha ft_isdigit ft_isalnum **********************\n");
	int i;

	i = -1;
	while (i < 530)
	{
		if (!!ft_isalpha(i) != !!isalpha(i))
		{
		 	printf("************************* ISALPHA  ");
			printf("i:%3d %#04x %c | %d | %d\n", i, i, isprint(i), ft_isalpha(i), isalpha(i));
		}
		
		if (!!ft_isalnum(i) != !!isalnum(i))
		{
		 	printf("********************************   ");
			printf("i:%3d %#04x %c | %d | %d\n", i, i, isprint(i), ft_isalnum(i), isalnum(i));
		}


		//printf("i:%d %c | %d | %d\n", i, i, ft_isalnum(i)-1, isalnum(i)-1);
		//printf("i:%d | %d | %d\n", i, ft_isalnum(i)-1, isalnum(i)-1);

		// if (ft_isalnum(i) == 0 && isalnum(i) != 0)
		// 	printf("i:%d (%c) | %d | %d\n", i, i, ft_isalnum(i), isalnum(i));

		// if (ft_isalnum(i) == 1 && isalnum(i) == 0)
		// 	printf("BBBB:%d (%c) | %d | %d\n", i, i, ft_isalnum(i), isalnum(i));
		i++;
	}

	// i = -1;
	// while (i < 530)
	// {
	// 	printf("%3s \n", isalnum(i)  ? "Alphanumeric" : " ");
	// 	//printf("i: %d %c ==> %3d\n", i, i, isalnum(i));
	// 	i++;
	// }
}
                                          
// int main(void)                                                                  
// {                                                                               
//    int ch;                                                                      
                                                                                
//    for ( ch = -110; ch <= 530; ++ch )                                      
//    {                                                                            
//       printf("%3d ", ch);                                                       
//       printf("%#04x ", ch);                                                     
//       printf(" %c ",  isprint(ch)  ? ch   : ' ');                                
//       printf("%3s ", isalnum(ch)  ? "Alphanumeric" : " ");                      
//       printf("%2s ", isalpha(ch)  ? "Alphabetic"  : " ");                       
//       printf("%2s ",  iscntrl(ch)  ? "Control"  : " ");                          
//       printf("%2s ",  isdigit(ch)  ? "Digit"  : " ");                            
//       printf("%2s ",  isgraph(ch)  ? "Graphic"  : " ");                          
//       printf("%2s ",  islower(ch)  ? "Lower"  : " ");                           
//       printf("%3s ",  ispunct(ch)  ? "Punctuation" : " ");                       
//       printf("%2s ",  isspace(ch)  ? "Space"  : " ");                            
//       printf("%3s ",  isprint(ch)  ? "Printable" : " ");                         
//       printf("%2s ",  isupper(ch)  ? "Upper"  : " ");                           
//       printf("%2s ",  isxdigit(ch) ? "Hex"  : " ");                             
                                                                                
//       putchar('\n');                                                            
//    }                                                                            
// }