NAME		= libftprintf.a

SRC 		= ./src
INCLUDE 	= ./include
BIN	 		= ./bin
OBJ 		= ./obj
MAIN		= ./main
LIBFT 		= libft/libft.a 
LIB_		= ./libft

CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror -g

all: $(NAME)

lib:
	@echo "Compiling: libft"
	make re -C $(LIB_) 

run: $(NAME)
	$(CC) $(CFLAGS) $(MAIN)/testes.c $(NAME) -I $(INCLUDE) -o $(BIN)/test && $(BIN)/test

libed: ft_printf.o ft_putchar.o ft_puthexa_caps.o ft_puthexa.o ft_putnbr_u.o ft_putnbr.o ft_putstr.o ft_putpointer.o

$(NAME): libed lib
	@cp libft/libft.a ./$(NAME)
	@ar rc $(NAME) $(OBJ)/*.o
	@echo "ar: creating archive libftprintf.a"
	@echo "libftprintf.a Done!"
	@ranlib $(NAME)

%.o: $(SRC)/%.c $(INCLUDE)/ft_printf.h
	@echo "Compiling: $<"
	@$(CC) $(CFLAGS) -c $< -I $(INCLUDE) -o $(OBJ)/$@ 
	
clean:
	rm -rf ./obj/* ./bin/*

fclean: clean
	rm -f $(NAME)

re: fclean all