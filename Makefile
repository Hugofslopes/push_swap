# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 10:40:31 by hfilipe-          #+#    #+#              #
#    Updated: 2024/12/05 15:00:25 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
GDB = -g
FLAGS = -Wall -Werror -Wextra
SRC = new_split.c char_int_array.c push_swap.c dealoc_.c  add_to_lists.c\
ft_lstclear.c swap.c push.c
TESTMAINSRC = test_main.c
OBJ = $(SRC:.c=.o)
NAME = pushswap.a
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