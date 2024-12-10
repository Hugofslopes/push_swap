/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:52:25 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/10 13:14:10 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void order_5(t_l **a, t_l **b)
{
	int	max;
	int	min;
	t_l	*curr;

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
	curr = *a;
	while (curr->n != min)
		curr = curr->next;
	push(a, b, 'b');
	curr = *a;
	while (curr->n != max)
		curr = curr->next;
	push(a, b, 'b');
	order_3(a);
	push(b, a, 'a');
	rotate(a, 'a');
	push(b, a, 'a');
}
