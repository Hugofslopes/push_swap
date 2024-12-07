# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 10:40:31 by hfilipe-          #+#    #+#              #
#    Updated: 2024/12/07 11:30:25 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
GDB = -g
FLAGS = -Wall -Werror -Wextra
SRC = new_split.c char_int_array.c dealoc_.c  add_to_lists.c \
ft_lstclear.c swap.c push.c rotate.c ft_putstr.c rr.c ss.c pp.c testprints.c\
reverse_rotate.c inorder.c order_3.c order.c
TESTMAINSRC = push_swap.c 
OBJ = $(SRC:.c=.o)
NAME = pushswap.c
TESTMAIN = testmain
RM = rm -f


all : $(NAME)
$(NAME): $(OBJ)
	@ar rcs $@ $^	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

main:
	$(CC) $(FLAGS) $(SRC) $(TESTMAINSRC) -o $(TESTMAIN)  $(GDB) 

fclean:
	$(RM) $(TESTMAIN)
