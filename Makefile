NAME = delete_print
SRC = main.c
OBJECTS = main.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc -o $(NAME) -Wall -Wextra -Werror $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)
