/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:54:45 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/17 16:45:42 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortb(t_l **a, t_l **b)
{
	int	count;

	count = 0;
	while (*b)
	{
		count = 0;
		while (get_first_node_index(b) != get_max_index(b))
		{
			if (get_second_node_index(b) == get_max_index(b))
				swap(b, 'b');
			else if ((*b)->index == get_max_index(b))
				reverse_rotate(b, 'b');
			else
			{
				rotate(b, 'b');
				count++;
			}
		}
		push(b, a, 'a');
		while (count)
		{
			reverse_rotate(b, 'b');
			count--;
		}
	}
}

void	push_sort_b(t_l **a, t_l **b, int n)
{
	if (get_first_node_index(a) < n)
	{
		push(a, b, 'b');
		if ((*b)->next != NULL)
		{
			if (get_first_node_index(b) < (*b)->index)
				rotate(b, 'b');
			if (get_first_node_index(b) < get_second_node_index(b))
				swap(b, 'b');
			else if (get_second_node_index(b) < (*b)->index)
			{
				swap(b, 'b');
				rotate(b, 'b');
			}
		}
	}
}

void	sort(t_l **a, t_l **b, int x )
{
	int	n;
	int	n2;

	n = (calc_avg(*a) * 2);
	n2 = n;
	n /= x;
	while (calc_nr_nodes(a))
	{
		while (get_first_node_index(a) >= n)
		{
			if ((*a)->index < n)
				reverse_rotate(a, 'a');
			else if (get_second_node_index(a) < n)
				swap(a, 'a');
			else
				rotate(a, 'a');
		}
		push_sort_b(a, b, n);
		if ((smaller_av(n, a)))
			n = n + (n2 / x);
	}
	sortb(a, b);
}

int	get_second_node_index(t_l **list)
{
	t_l	*curr;

	curr = *list;
	if (curr->next)
	{
		if (curr->next->next)
		{
			while (curr->next->next != NULL)
				curr = curr->next;
		}
		return (curr->index);
	}
	else
		return (-1);
}

int	get_first_node_index(t_l **list)
{
	t_l	*curr;

	curr = *list;
	while (curr->next != NULL)
		curr = curr->next;
	return (curr->index);
}
