NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra  -Werror
SRC = *.c
OUT = *.o

all:$(NAME)
	
$(NAME):fclean
		$(CC) $(FLAGS) -c $(SRC) -I.
			ar rc $(NAME) $(OUT)

clean:
		rm -rf *.o

fclean: clean
		rm -rf *.a

re: fclean all

bonus :
