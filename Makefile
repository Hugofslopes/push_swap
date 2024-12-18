# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 10:40:31 by hfilipe-          #+#    #+#              #
#    Updated: 2024/12/18 13:12:42 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
GDB = -g
FLAGS = -Wall -Werror -Wextra
SRC = new_split.c char_int_array.c dealoc_.c ft_putstr.c radix_sort.c order_5.c \
ft_lstclear.c swap.c push.c rotate.c  add_to_lists.c sort_array.c radix_utils.c \
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

