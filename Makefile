NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar
ARFLAGS = rcs

SRCS = 	ft_printf.c \
		ft_strlen.c \
		ntoa.c \
		out.c \
		print_c.c \
		print_di.c \
		print_p.c \
		print_percent.c \
		print_s.c \
		print_u.c \
		print_x.c \
		utils.c

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
