# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 10:40:31 by hfilipe-          #+#    #+#              #
#    Updated: 2025/04/29 16:35:24 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
GDB = -ggdb
FLAGS = -Wall -Werror -Wextra
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = includes
SRC_FILES = new_split.c char_int_array.c ft_putstr.c radix_sort.c order_5.c \
dealoc.c ft_lstclear.c swap.c push.c rotate.c add_to_lists.c sort_array.c \
radix_utils.c reverse_rotate.c inorder.c order_3.c push_swap.c ft_putstr_err.c \
ft_calloc.c order_4.c
SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))
NAME = push_swap
RM = rm -f
DEPS = $(OBJ:.o=.d)

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(FLAGS) -I $(INC_DIR) -MMD -c $< -o $@

-include $(DEPS)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) -r $(OBJ_DIR)

re: fclean all
