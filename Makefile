Name = libftprintf.a
OBJS = $(SRCS:.c = .o)
SRCS = main.c printf.c ft_printf_utils.c \

cc = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = -rcs
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(ar) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJS)

fclean: 
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus