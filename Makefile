NAME	= ft_printf.a

CC		= cc

CFLAG	= -Wall -Wextra -Werror

SRC_DIR = src/

SRC	= ft_printf.c \
			ft_print_char.c \
			ft_print_str.c \
			ft_print_nbr.c \
			ft_print_int.c \
			ft_print_unsigned_int.c \
			ft_print_percent.c

INCLUDE_DIR	= include

OFILE		= $(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OFILE)
	ar rcs $(NAME) $(OFILE)

%.o:	%.c
	$(CC) $(CFLAG) -I $(INCLUDE) -c $< -o $@

clean:
	rm -fv $(OFILE)

fclean:	clean
	rm -fv $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
