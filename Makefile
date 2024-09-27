NAME		= libftprintf.a
SRC_DIR		= src
OBJ_DIR		= obj
LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a
INCLUDE		= include
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -I$(INCLUDE)
RM			= rm -f
AR			= ar rcs

SRC			= ft_print_char.c \
			  ft_print_int.c \
			  ft_print_nbr.c \
			  ft_print_percent.c \
			  ft_print_ptr.c \
			  ft_print_str.c \
			  ft_print_unsigned_int.c \
			  ft_printf.c \
			  ft_print_hex_lower.c \
			  ft_print_hex_upper.c

OBJ 		= $(SRC:%.c=$(OBJ_DIR)/%.o)

# สร้างไลบรารีโดยสร้าง libft ก่อน
$(NAME): $(LIBFT) $(OBJ)
	cp $(LIBFT) $(NAME)
	mv $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJ)

# คอมไพล์ไฟล์ .c เป็น .o โดยสร้าง $(OBJ_DIR) ก่อน
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# สร้างโฟลเดอร์ obj ถ้ายังไม่มี
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# กฎในการไปสร้างไลบรารี libft ก่อน
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

all: $(NAME)

clean:
	$(RM) -rf $(OBJ_DIR)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) -rf $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
