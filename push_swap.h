/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:04:42 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/16 17:27:05 by hfilipe-         ###   ########.fr       */
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
	int					index;
	int					index_b[32];
}	t_l;

void	push_swap(char **argv, int argc, t_l **a, t_l **b);
size_t	count_words(char *str, char c);
size_t	count_char(char *str, char c);
void	dealoc(char **strgs);
char	**new_split(char *str, char c);
void	c_strgs( char *str, char **strgs, char c);
long	*char_int_array(char **str, size_t *nbr_nod, int argc);
long	*char_int_arrayb(char **str, long *array, int sign, size_t *i);
size_t	count_arrays(char **str);
void	dealoc_(char **list);
void	free_chars(char **str, size_t i);
void	add_to_lists(t_l **a, long *array, size_t nr_nod);
void	add_to_listsb(t_l **curr, t_l **new_node, t_l **a);
void	ft_lstclear(t_l **lst);
void	swap(t_l **list, char c);
void	push(t_l **a, t_l **b, char c);
void	pushb(t_l **a, t_l **b, t_l **new_node);
void	b_not_null(t_l *top_b, t_l **new_node);
void	rotate(t_l **list, char c);
void	ft_putstr(char *s);
void	reverse_rotate(t_l **list, char c);
void	rr(t_l **a, t_l **b);
void	ss(t_l **a, t_l **b);
int		in_order(t_l **a);
void	order_3(t_l **a);
int		order(t_l **a, t_l **b, size_t nr_nodes);
int		calc_avg(t_l *curr);
void	test_prints(t_l **a, t_l **b);
int		check_equal_n(t_l **a);
void	exit_clean(t_l **a);
void	ft_putstr_err(char *s);
long	*array_errors2(long *array);
void	array_errors(char **str, int argc);
void	*ft_calloc(size_t nmemb, size_t size);
void 	order_5(t_l **a, t_l **b);
void	ft_bzero(void *ptr, size_t n);
void	dec_to_bin(int n, int (*array2)[32]);
void 	sort_array(long **array, size_t size, t_l **a);
void 	sort_array_put_index(long **array, size_t size, t_l **a);
int		ft_strcmp(const char *s1, const char *s2);
void 	radix(t_l **a, t_l **b );
int		get_first_node_index(t_l **list);
void radixb(t_l **a, t_l **b);
#endif
