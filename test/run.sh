gcc -Wall -Werror -Wextra -g -fsanitize=address test/main_memcpy.c ft_memcpy.c -o test/a.out && ./test/a.out && rm test/a.out
gcc -Wall -Werror -Wextra -g -fsanitize=address test/main_memccpy.c ft_memccpy.c -o test/a.out && ./test/a.out && rm test/a.out
gcc -Wall -Werror -Wextra -g -fsanitize=address test/main_isalnum.c ft_isalnum.c ft_isalpha.c ft_isdigit.c -o test/a.out && ./test/a.out && rm test/a.out
gcc -Wall -Werror -Wextra -g -fsanitize=address test/main_toupper.c ft_toupper.c -o test/a.out && ./test/a.out && rm test/a.out