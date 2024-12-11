/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:15:15 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/11 14:14:22 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	order(t_l **a, t_l **b, size_t nr_nodes, char c)
{
	t_l	*curr;
	int	average;
	int nr_nodes2;
	int break_f;
	
	curr = *a;
	average = calc_avg(curr);
	printf("%d", average);
	nr_nodes2 = (int)nr_nodes;
	break_f = 0;
	orderb(a, b, &nr_nodes2, &break_f, average, c);
	while (break_f < nr_nodes2)
		break_f = orderb(a, b, &nr_nodes2, &break_f, average, c);
	return (nr_nodes - break_f);
}

int	orderb(t_l **a, t_l **b, int *nr_nodes, int *break_f, int average, char c)
{
	t_l	*curr;
	char c2;
	if (c == 'a')
		c2 = 'b';
	else 
		c2 = 'a';
	(*break_f) = 0;
	curr = *a;
	while (curr->next != NULL)
	{
		if (curr->index >= average)
			(*break_f)++;
		curr = curr->next;
	}
	if (curr->index >= average)
			(*break_f)++;
	if (curr->index < average)
	{
		push(a, b, c2);
		order_b_afterpush(b, average);
		(*nr_nodes)--;
	}
	else
		rotate(a, c);
	return ((*break_f));
}

int	calc_avg(t_l *curr)
{
	int	min;
	int	max;

	min = 2147483647;
	max = -2147483648;
	while (curr != NULL)
	{
		if ((int)(curr->index) > max)
			max = curr->index;
		curr = curr->next;
	}
	return (max / 2);
}

void	order_b_afterpush(t_l **b, int average)
{
	t_l	*curr;
	int	new_av;

	new_av = average / 2;
	curr = *b;
	if (curr->next != NULL)
	{
		while (curr->next != NULL)
			curr = curr->next;
	}
	if (curr->prev != NULL)
		if (curr->index < new_av)
			rotate(b, 'b');
}
