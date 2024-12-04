/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:04:42 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/04 16:15:04 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct link_list
{
	int					n;
	struct link_list	*next;
} l;

# include <stdlib.h>
# include <stdio.h>

int 	*push_swap(char **list, int argc);
size_t	count_words(char *str, char c);
size_t	count_char(char *str, char c);
void 	dealoc(char **strgs);
char 	**new_split (char *str, char c);
void 	c_strgs( char *str, char **strgs, char c);
int 	*char_int_array(char **str);
size_t	count_arrays(char **str);
void 	dealoc_(char **list);
void	free_chars(char **str, size_t i);

# endif

