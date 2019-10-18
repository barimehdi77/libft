NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c *.c
	ar rc $(NAME) *.o

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)
re : fclean all
