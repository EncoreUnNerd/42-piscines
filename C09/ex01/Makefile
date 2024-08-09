ALL_C = srcs/ft_putstr.o srcs/ft_swap.o srcs/ft_strlen.o srcs/ft_strcmp.o srcs/ft_putchar.o

all: libft.a
srcs/ft_putchar.o: srcs/ft_putchar.c
	gcc -c -Wall -Wextra -Werror -I./includes srcs/ft_putchar.c -o srcs/ft_putchar.o
srcs/ft_putstr.o: srcs/ft_putstr.c
	gcc -c -Wall -Wextra -Werror -I./includes srcs/ft_putstr.c -o srcs/ft_putstr.o
srcs/ft_swap.o: srcs/ft_swap.c
	gcc -c -Wall -Wextra -Werror -I./includes srcs/ft_swap.c -o srcs/ft_swap.o
srcs/ft_strlen.o: srcs/ft_strlen.c
	gcc -c -Wall -Wextra -Werror -I./includes srcs/ft_strlen.c -o srcs/ft_strlen.o
srcs/ft_strcmp.o: srcs/ft_strcmp.c
	gcc -c -Wall -Wextra -Werror -I./includes srcs/ft_strcmp.c -o srcs/ft_strcmp.o
libft.a: $(ALL_C)
	ar rcs libft.a $(ALL_C)
clean:
	rm -f srcs/*o
	rm -f includes/*gch
fclean: clean
	rm -f libft.a
re: fclean all
