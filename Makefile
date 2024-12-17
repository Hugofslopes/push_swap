# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 10:40:31 by hfilipe-          #+#    #+#              #
#    Updated: 2024/12/17 15:01:45 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
GDB = -g
FLAGS = -Wall -Werror -Wextra
SRC = new_split.c char_int_array.c dealoc_.c sort.c sort_utils.c ft_putstr.c \
ft_lstclear.c swap.c push.c rotate.c  add_to_lists.c sort_array.c  order_5.c  \
reverse_rotate.c inorder.c order_3.c push_swap.c ft_putstr_err.c ft_calloc.c

OBJ = $(SRC:.c=.o)
NAME = push_swap
RM = rm -f

all : 
	$(CC) $(CFLAGS) $(SRC) -o $(NAME) $(GDB)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all