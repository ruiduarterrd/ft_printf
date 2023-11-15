NAME = libftprintf.a

# Add more files to sources
SRCS = ft_putchr.c \
		ft_putstr.c \
		ft_itoa.c \
		ft_putnbr.c \
		ft_countdigits.c \
		ft_utoa.c \
		ft_hextoa.c \
		ft_ptoa.c \
		ft_format.c \
		ft_printf.c

# Use same files from sources, but change .c to .o
OFILES = ${SRCS:.c=.o}

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

LIB = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OFILES)
	$(LIB) $(NAME) $(OFILES)

clean:
	$(RM) $(OFILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# phony will run, independent from the state of the file system, avoid make in files with same name
.PHONY: all clean fclean re