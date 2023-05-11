NAME = libftprintf.a
CC = cc
CFLAGS = 
AR = ar
ARFLAGS = rcs
LIBFT = ./libft/libft.a
LIBFT_DIR = ./libft

SRCS = ft_printf.c out.c numbers.c utils.c

OBJS = $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

test: $(NAME) $(LIBFT) main.c
	$(CC) $(CFLAGS) main.c $(NAME) $(LIBFT) -o test
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
