NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
AR = ar
ARFLAGS = rcs

SRCS = ft_printf.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_strlen.c out.c numbers.c utils.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re