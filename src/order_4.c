/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:52:25 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/04/29 16:50:04 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_min(t_l **b, t_l **a, int min)
{
	t_l	*curr;

	curr = *a;
	while (curr->next != NULL)
		curr = curr->next;
	rotate(a, 'a');
	if (curr->index == min)
	{
		push(a, b, 'b');
		return (1);
	}
	return (0);
}

int	add_min(int min, t_l **a, t_l **b)
{
	t_l	*curr;

	curr = *a;
	while (curr->next != NULL)
		curr = curr->next;
	if (curr->index == min)
	{
		push(a, b, 'b');
		return (1);
	}
	while (curr->index != min)
	{
		curr = *a;
		if (curr->index == min)
		{
			reverse_rotate(a, 'a');
			push(a, b, 'b');
			return (1);
		}
		else
			if (find_min(b, a, min))
				return (1);
	}
	return (0);
}

void	order_4(t_l **a, t_l **b)
{
	int	min;
	t_l	*curr;
	int	check;

	check = 0;
	min = 2147483647;
	curr = *a;
	while (curr)
	{
		if (curr->index < min)
			min = curr->index;
		curr = curr->next;
	}
	while (check < 1)
		check += add_min(min, a, b);
	order_3(a);
	push(b, a, 'a');
}
