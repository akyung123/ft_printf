NAME = libftprintf.a
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
HEADER = ft_printf.h

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: bonus
bonus : $(OBJS)
	@ar rcs $(NAME) $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
