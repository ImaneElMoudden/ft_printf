NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printhexa.c ft_putchar.c ft_putnbr.c ft_putnbru.c ft_putptr.c ft_putstr.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar -rcs $(NAME) $(OBJ)

%.o: %.c
		cc $(FLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re