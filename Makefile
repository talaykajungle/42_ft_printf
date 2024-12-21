# Variables
Name = libftprintf.a
OBJS = $(SRCS:.c = .o)
SRCS = main.c printf.c ft_printf_utils.c \

cc = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = -rcs
RM = rm -rf

# Default rule
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJS)
	$(ar) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean: 
	$(RM) $(OBJS)

# fclean rule
fclean: 
	$(RM) $(NAME)

# Rebuild rule
re: fclean all

.PHONY: all clean fclean re bonus