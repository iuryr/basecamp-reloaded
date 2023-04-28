CC = gcc
NAME = ft_display_file
CFLAGS = -Wall -Wextra -Werror -c 
FLAGS = -Wall -Wextra -Werror

all: $(NAME).o 
	$(CC) $(FLAGS) -o $(NAME) $(NAME).o

$(NAME).o:
	$(CC) $(CFLAGS) $(NAME).c -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
