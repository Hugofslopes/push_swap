/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:52:25 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/16 11:22:45 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int add_min_max_b(int max, int min, t_l **a, t_l **b);

void order_5(t_l **a, t_l **b)
{
	int	max;
	int	min;
	t_l	*curr;
	int	check;

	check = 0;
	min = 2147483647;
	max = -1;
	curr = *a;
	while (curr)
	{
		if (curr->index > max)
			max = curr->index;
		if (curr->index < min)
			min = curr->index;
		curr = curr->next;
	}
	while (check < 2)
		check += add_min_max_b(max, min, a, b);
	order_3(a);
	if (((*b)->n < (*b)->next->n))
		swap(b, 'b');
	push(b, a, 'a');
	push(b, a, 'a');
	rotate(a, 'a');
}

int add_min_max_b(int max, int min, t_l **a, t_l **b)
{
	t_l *curr;

	curr = *a;
	while (curr->next != NULL)
		curr = curr->next;
	if (curr->index == max || curr->index == min)
	{
		push(a, b, 'b');
		return (1);	
	}
	while (curr->index != max || curr->index != min)
	{
		curr = *a;
		if (curr->index == max || curr->index == min)
		{
			reverse_rotate(a, 'a');
			push(a, b, 'b');
			return (1);	
		}
		while (curr->next != NULL)
			curr = curr->next;
		rotate(a, 'a');
		if (curr->index == max || curr->index == min)
		{
			push(a, b, 'b');
			return (1);	
		}
	}
	return (0);
}
