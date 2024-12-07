/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:15:15 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/07 11:12:26 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order(t_l **a, t_l **b, size_t nr_nodes, int break_f)
{
	int	average;
	t_l	*curr;
	
	if (break_f == (int)nr_nodes)
		return;
	break_f = 0;
	curr = *a;
	if (curr->next != NULL)
	{
		while (curr->next != NULL)
		{
			average += curr->n;
			curr = curr->next;
		}
	}
	average /= nr_nodes;
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
			nr_nodes--;
		}
	else
		rotate(a, 'a');
	test_prints(a, b);
	order(a, b, nr_nodes, break_f);
}
