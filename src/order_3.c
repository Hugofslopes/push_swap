/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:29:57 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/04/29 16:50:00 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	order_3(t_l **a)
{
	t_l	*top;
	t_l	*midle;
	t_l	*botom;

	botom = *a;
	midle = (*a)->next;
	top = (*a)->next->next;
	if ((top->n < midle->n) && (top->n < botom->n) && (midle->n > botom->n))
	{
		reverse_rotate(a, 'a');
		swap(a, 'a');
	}
	else if (top->n > midle->n && midle->n < botom->n && top->n > botom->n)
		rotate(a, 'a');
	else if (top->n > midle->n && top->n > botom->n && midle->n > botom->n)
	{
		rotate(a, 'a');
		swap(a, 'a');
	}
	else if (top->n > midle->n && top->n < botom->n && midle->n < botom->n)
		swap(a, 'a');
	else if (top->n < midle->n && top->n > botom->n && midle->n > botom->n)
		reverse_rotate(a, 'a');
}
