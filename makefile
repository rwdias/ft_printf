SRC 	= ./src
INCLUDE = ./include
BIN	 	= ./bin
OBJ 	= ./obj
MAIN	= ./main
LIBFT 	= ./libft/make

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all:
	$(LIBFT) 
	$(CC) $(CFLAGS) -c $(SRC)/*.c -I $(INCLUDE) -o $(OBJ)/test

run:
	./bin

clean:
	rm -rf ./obj/* ./bin/*
fclean: clean
	rm -f $(NAME)

re: fclean all