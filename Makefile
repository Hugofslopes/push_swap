# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/04 10:40:31 by hfilipe-          #+#    #+#              #
#    Updated: 2024/12/04 15:48:37 by hfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
GDB = -g
FLAGS = -Wall -Werror -Wextra
SRC = new_split.c char_int_array.c push_swap.c dealoc_.c
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