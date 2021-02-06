gcc -Wall -Werror -Wextra -g -fsanitize=address -include libft.h test/main_memcpy.c		libft.a -o test/a.out && ./test/a.out && rm test/a.out
gcc -Wall -Werror -Wextra -g -fsanitize=address -include libft.h test/main_memccpy.c	libft.a -o test/a.out && ./test/a.out && rm test/a.out
gcc -Wall -Werror -Wextra -g -fsanitize=address -include libft.h test/main_isalnum.c	libft.a -o test/a.out && ./test/a.out && rm test/a.out
gcc -Wall -Werror -Wextra -g -fsanitize=address -include libft.h test/main_toupper.c	libft.a -o test/a.out && ./test/a.out && rm test/a.out
gcc -Wall -Werror -Wextra -g -fsanitize=address -include libft.h test/main_split.c		libft.a -o test/a.out && ./test/a.out && rm test/a.out
gcc -Wall -Werror -Wextra -g -fsanitize=address -include libft.h test/main_itoa.c		libft.a -o test/a.out && ./test/a.out && rm test/a.out
gcc -Wall -Werror -Wextra -g -fsanitize=address -include libft.h test/main_strcmp.c		libft.a -o test/a.out && ./test/a.out && rm test/a.out
gcc -Wall -Werror -Wextra -g  -include libft.h test/main_strncpy.c	libft.a -o test/a.out && ./test/a.out && rm test/a.out