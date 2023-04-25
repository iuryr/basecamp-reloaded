CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC = ./srcs
INCL = ./includes
SRC_FILES = $(wildcard $(SRC)/*.c)
OBJ_FILES = $(SRC_FILES:.c=.o)

libft.a: $(OBJ_FILES)
	$(CC) $(FLAGS) -c -I $(INCL) -o libft.a $(OBJ_FILES) 

teste: $(OBJ_FILES)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm $(SRC)/*.o

fclean: clean
	rm libft.a

re: fclean all
