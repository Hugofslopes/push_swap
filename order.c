/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:15:15 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/08 12:20:44 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order(t_l **a, t_l **b, size_t nr_nodes, int break_f)
{
	int	average;
	t_l	*curr;

	if (break_f == (int)nr_nodes)
		return ;
	break_f = 0;
	curr = *a;
	average = 0;
	average = calc_avg(curr, average, nr_nodes);
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
	order(a, b, nr_nodes, break_f);
}

int	calc_avg(t_l *curr, int average, size_t nr_nodes)
{
	if (curr->next != NULL)
	{
		while (curr->next != NULL)
		{
			average += curr->n;
			curr = curr->next;
		}
	}
	average /= nr_nodes;
	return (average);
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
