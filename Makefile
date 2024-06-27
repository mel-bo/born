CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS	= ft_ptraddress.c ft_puthexa.c ft_putstr.c \
				ft_strlen.c ft_putchar.c ft_putnbr.c \
				ft_putunsigned.c ft_strrchr.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a
all: $(NAME)

$(NAME): $(OBJ)
        ar -rcs $(NAME) $(OBJ)

clean:
				$(RM) $(OBJ)

fclean: clean
        $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

