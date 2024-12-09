/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:15:15 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/09 16:27:09 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void orderb(t_l **a, t_l **b, size_t nr_nodes, int average, int break_f);

void	order(t_l **a, t_l **b, size_t nr_nodes, int break_f)
{
	int	average;
	t_l	*curr;

	break_f = 0;
	curr = *a;
	average = calc_avg(curr);
	orderb(a, b, nr_nodes, average, break_f);
}

void orderb(t_l **a, t_l **b, size_t nr_nodes, int average, int break_f)
{
	t_l	*curr;

	if (break_f == (int)nr_nodes)
		return ;
	break_f = 0;
	curr = *a;
	while (curr->next != NULL)
	{
		if (curr->n >= average)
			break_f++;
		curr = curr->next;
	}
	if (curr->n < average)
	{
		push(a, b, 'b');
		order_b_afterpush(b);
		nr_nodes--;
	}
	else
		rotate(a, 'a');
	test_prints(a, b);
	orderb(a, b, nr_nodes, average, break_f);
}

int	calc_avg(t_l *curr)
{
    int min = 2147483647;
    int max = -2147483648;

    while (curr != NULL) 
	{
		if (curr->n < min)
			min = curr->n; 
		if (curr->n > max)
			max = curr->n; 
        curr = curr->next;
    }
	if (min < 0)
		return (min + max);
	return (max - min);
}

void	order_b_afterpush(t_l **b)
{
	t_l	*curr;

	curr = *b;
	if (curr->next != NULL)
	{
		while (curr->next != NULL)
			curr = curr->next;
	}
	if (curr->prev != NULL)
	{
		if (curr->n < curr->prev->n)
			swap(b, 'b');
	}
}
