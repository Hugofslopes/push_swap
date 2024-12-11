# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 10:40:31 by hfilipe-          #+#    #+#              #
#    Updated: 2024/12/11 15:21:43 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
GDB = -g
FLAGS = -Wall -Werror -Wextra
SRC = new_split.c char_int_array.c dealoc_.c  add_to_lists.c \
ft_lstclear.c swap.c push.c rotate.c ft_putstr.c rr.c ss.c pp.c testprints.c\
reverse_rotate.c inorder.c order_3.c order.c push_swap.c ft_putstr_err.c \
ft_calloc.c order_5.c sort_array.c radix.c
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