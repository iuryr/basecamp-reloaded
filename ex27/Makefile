CC = cc
NAME = ft_display_file
CFLAGS = -Wall -Wextra -Werror -c 
FLAGS = -Wall -Wextra -Werror

all: $(NAME).o 
	$(CC) $(FLAGS) -o $(NAME) $(NAME).o

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
