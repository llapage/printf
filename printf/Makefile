NAME = libftprintf.a

SRC = src/ft_printf.c

BIN = ft_printf.o

FLAGS = -Wall -Werror -Wextra

.PHONY: all

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) ./libft/libft.h
	ar rc $(NAME) $(BIN)

clean:
	rm -f $(BIN)

fclean: clean
	rm -f $(NAME)

re : fclean all
