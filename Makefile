NAME = libftprintf.a
CC = cc
CFLAGS = 
AR = ar
ARFLAGS = rcs

SRCS = ft_printf.c out.c numbers.c utils.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c $(NAME) -o test
	./test

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	rm -f test
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
