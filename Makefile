# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbari <mbari@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/30 09:48:13 by mbari             #+#    #+#              #
#    Updated: 2021/06/06 19:33:11 by mbari            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
RESET = \033[0m

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_intsize.c ft_isalnum.c ft_isalpha.c \
	  	ft_isdigit.c ft_isascii.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
		ft_toupper.c ft_putstr_fd.c ft_memcmp.c ft_strcmp.c my_split.c

OBJ = $(SRC:%.c=%.o)


CC = gcc

CFLAGS = -Wall -Werror -Wextra


all: $(NAME)

drawing:
	@echo "$(BLUE)█████████████████████████ Making LIBFT █████████████████████████$(RESET)"

$(NAME): drawing $(OBJ)
	@echo "$(BLUE)█ $(YELLOW)Create and maintain library archives$(RESET) for all .o:\r\t\t\t\t\t\t\t$(GREEN){DONE}$(BLUE) █$(RESET)"
	@ar rc $(NAME) $(OBJ)
	@echo "$(BLUE)█ $(YELLOW)Creating$(RESET) $@:\r\t\t\t\t\t\t\t$(GREEN){DONE}$(BLUE) █$(RESET)"
	@ranlib $(NAME)
	@echo "$(BLUE)███████████████████████ Compiling is DONE ██████████████████████$(RESET)"	

%.o: %.c
	@echo "$(BLUE)█ $(YELLOW)Compiling$(RESET) $<:\r\t\t\t\t\t\t\t$(GREEN){DONE}$(BLUE) █$(RESET)"
	@$(CC) $(CFLAGS) -c $<

clean:
	@echo "$(RED)deleting$(RESET): libft objects"
	@/bin/rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	@echo "$(RED)deleting$(RESET): $(NAME)"
	@/bin/rm -f $(NAME)

re: fclean all
