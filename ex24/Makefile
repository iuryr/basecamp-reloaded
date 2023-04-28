NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ./srcs
INCL = ./includes
FILES = ft_putchar.c ft_putstr.c ft_swap.c ft_strlen.c ft_strcmp.c
#Colando diretório no nome dos arquivos .c
SRC_FILES = $(foreach file,$(FILES),$(SRC)/$(file))
OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar -crs $(NAME) $(OBJ_FILES)	

%.o : %.c
	$(CC) $(FLAGS) -I $(INCL) -c $< -o $@

clean:
	rm -f $(SRC)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all
