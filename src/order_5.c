/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:52:25 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/04/29 18:16:49 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	calc_max(t_l **a)
{
	t_l	*curr;
	int	max;

	max = -1;
	curr = *a;
	while (curr)
	{
		if (curr->index > max)
			max = curr->index;
		curr = curr->next;
	}
	return (max);
}

int	add_max(t_l **a, t_l **b)
{
	t_l	*curr;
	int	max;

	curr = *a;
	max = calc_max(a);
	while (curr->next != NULL)
		curr = curr->next;
	if (curr->index == max)
	{
		push(a, b, 'b');
		return (1);
	}
	else
	{
		curr = *a;
		if (curr->index == max)
		{
			reverse_rotate(a, 'a');
			push(a, b, 'b');
			return (1);
		}
		else
			rotate (a, 'a');
	}
	return (0);
}

void	order_5(t_l **a, t_l **b)
{
	int	check;

	check = 0;
	while (check < 2)
		check += add_max(a, b);
	order_3(a);
	if (((*b)->n < (*b)->next->n))
		swap(b, 'b');
	push(b, a, 'a');
	rotate(a, 'a');
	push(b, a, 'a');
	rotate(a, 'a');
}
