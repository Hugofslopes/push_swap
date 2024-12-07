/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:04:42 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/07 10:43:23 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct link_list
{
	int					n;
	struct link_list	*next;
	struct link_list	*prev;
	size_t				n_nodes;
}	t_l;

void	push_swap(char **argv, int argc, t_l **a, t_l **b);
size_t	count_words(char *str, char c);
size_t	count_char(char *str, char c);
void	dealoc(char **strgs);
char	**new_split(char *str, char c);
void	c_strgs( char *str, char **strgs, char c);
int		*char_int_array(char **str, size_t *nbr_nod);
int		*char_int_arrayb(char **str, int *array, int sign, size_t *i);
size_t	count_arrays(char **str);
void	dealoc_(char **list);
void	free_chars(char **str, size_t i);
void	add_to_lists(t_l **a, int *array);
void	add_to_listsb(t_l **curr, t_l **new_node, t_l **a);
void	ft_lstclear(t_l **lst);
void	swap(t_l **list, char c);
void	push(t_l **a, t_l **b, char c);
void	pushb(t_l **a, t_l **b, t_l **new_node);
void	rotate(t_l **list, char c);
void	ft_putstr(char *s);
void	reverse_rotate(t_l **list, char c);
void	rr(t_l **a, t_l **b);
void	ss(t_l **a, t_l **b);
void	pp(t_l **a, t_l **b);
int 	in_order(t_l **a);
int		order_3(t_l **a);
void	order(t_l **a, t_l **b, size_t nr_nodes, int break_f);

void test_prints(t_l **a, t_l **b);

#endif
