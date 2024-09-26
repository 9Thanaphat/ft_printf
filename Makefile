NAME		= libftprintf.a
INCLUDE		= include
LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a
SRC_DIR		= src/
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f
ar			= ar rcs
SRC			= ft_print_char.c \ t_print_int.c \
	ft_print_nbr.c \
	ft_print_percent.c \
	ft_print_ptr.c \
	ft_print_str.c \
	ft_print_unsigned_int.c \
	ft_printf.c \
	ft_print_hex_lower.c

OBJ_DIR		= obj/
OBJ 		= $(SRC:.c=$(OBJ_DIR)/%.o)

$(NAME):
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJ)

$(LIBFT):
	make -c $(LIBFT_DIR) all

$(OBJ_DIR):
					mkdir -p $(OBJ_DIR)

clean:
					make -C $(LIBFT_PATH) clean
					$(RM) $(OBJ_DIR)

fclean:				clean
					make -C $(LIBFT_PATH) fclean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all bonus clean fclean re libft


