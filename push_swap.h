/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:04:42 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/05 16:14:55 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>

typedef struct link_list
{
	int					n;
	struct link_list	*next;
}	t_l;

typedef struct s_ps
{
	t_l a;
	t_l b; 
	int *array;
	char **strgs;
} t_ps;


char	*push_swap(char **list, int argc, t_ps **st);
size_t	count_words(char *str, char c);
size_t	count_char(char *str, char c);
void	dealoc(char **strgs);
char	**new_split(char *str, char c);
void	c_strgs( char *str, char **strgs, char c);
int		*char_int_array(char **str);
size_t	count_arrays(char **str);
void	dealoc_(char **list);
void	free_chars(char **str, size_t i);
void	add_to_lists(t_l **a, t_l **b, int *array);
void	add_to_listb(t_l **b, t_l **a, int *array);
void	ft_lstclear(t_l **lst);
void	swap(t_l **list);
void 	push(t_l **a, t_l *an, t_l **b);

#endif
