NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra  -Werror
SRC = *.c \

all: $(NAME)

$(NAME):
		$(CC) $(FLAGS) -c $(SRC) -I.
			ar rc $(NAME) *.o

clean:
		rm -rf *.o

fclean: clean
		rm -rf *.a

re: fclean all

bonus :
