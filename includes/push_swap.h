/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:04:42 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/04/29 18:19:16 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct link_list
{
	int					n;
	struct link_list	*next;
	struct link_list	*prev;
	int					index;
}	t_l;

void	push_swap(char **argv, int argc, t_l **a, t_l **b);
char	**new_split(char *str, char c);
long	*char_int_array(char **str, size_t *nbr_nod, int argc);
void	dealoc_(char **list);
void	free_chars(char **str, size_t i);
void	add_to_lists(t_l **a, long *array, size_t nr_nod);
void	ft_lstclear(t_l **lst);
void	swap(t_l **list, char c);
void	push(t_l **a, t_l **b, char c);
void	rotate(t_l **list, char c);
void	ft_putstr(char *s);
void	reverse_rotate(t_l **list, char c);
int		in_order(t_l **a);
void	order_3(t_l **a);
int		check_equal_n(t_l **a);
void	ft_putstr_err(char *s);
long	*array_errors2(long *array);
void	array_errors(char **str, int argc);
void	*ft_calloc(size_t nmemb, size_t size);
void	order_5(t_l **a, t_l **b);
void	dec_to_bin(int n, int (*array2)[32]);
void	sort_array(long **array, size_t size, t_l **a);
void	sort_array_put_index(long **array, size_t size, t_l **a);
int		get_first_node_index(t_l **list);
int		get_second_node_index(t_l **list);
void	radix_sort(t_l **a, t_l **b, int nr_nodes);
int		*get_bits(int *array2, int number);
void	order_4(t_l **a, t_l **b);
#endif
