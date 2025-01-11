# Variables
SRCS =  ft_printf.c ft_printf_utils.c ft_pointer.c ft_puthex.c
OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a
LIBFTNAME = libft.a
LIBFTDIR = ./libft

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes -I$(LIBFTDIR)

# Default target
all: $(NAME)

makelibft:
	make -C $(LIBFTDIR)
	cp $(LIBFTDIR)/$(LIBFTNAME) $(NAME)

# Rule to compile object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the library
$(NAME): makelibft $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Clean rule
clean:
	rm -f $(OBJS)
	cd $(LIBFTDIR) && make clean

# fclean rule
fclean: clean
	rm -f $(NAME)
	cd $(LIBFTDIR) && make fclean

# Rebuild rule
re: fclean $(NAME)

.PHONY: all clean fclean re