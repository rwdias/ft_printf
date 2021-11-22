NAME		= ft_printf.a

SRC 		= ./src
INCLUDE 	= ./include
BIN	 		= ./bin
OBJ 		= ./obj
MAIN		= ./main
LIBFT 		= ./libft

CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror

all: lib libed

lib:
	@echo "Compiling: libft"
	make -C $(LIBFT) 

run:
	./bin

libed: ft_printf.o

%.o: $(SRC)/%.c $(INCLUDE)/ft_printf.h
	@echo "Compiling: $<"
	@$(CC) $(CFLAGS) -c $< -I $(INCLUDE) -o $(OBJ)/$@

clean:
	rm -rf ./obj/* ./bin/*
fclean: clean
	rm -f $(NAME)

re: fclean all