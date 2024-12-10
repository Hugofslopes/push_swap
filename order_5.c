/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:52:25 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/10 20:13:37 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int add_min_max_b(int max, int min, t_l **a, t_l **b);

void order_5(t_l **a, t_l **b)
{
	int	max;
	int	min;
	t_l	*curr;
	int	ver;

	ver = 0;
	min = 2147483647;
	max = -2147483648;
	curr = *a;
	while (curr)
	{
		if (curr->n > max)
			max = curr->n;
		if (curr->n < min)
			min = curr->n;
		curr = curr->next;
	}
	while (ver < 2)
		ver += add_min_max_b(max, min, a, b);
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
	if (curr->n == max || curr->n == min)
	{
		push(a, b, 'b');
		return (1);	
	}
	while (curr->n != max || curr->n != min)
	{
		rotate(a, 'a');
		if (curr->n == max || curr->n == min)
		{
			push(a, b, 'b');
			return (1);	
		}
	}
	return (-1);
}
