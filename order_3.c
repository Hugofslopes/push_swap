/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:29:57 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/10 16:39:03 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	else if ((top->n > midle->n) && (midle->n < botom->n) && (top->n >botom->n))
		rotate(a, 'a');
	else if ((top->n > midle->n) && (top->n > botom->n) && (midle->n > botom->n))
	{
		rotate(a, 'a');
		swap(a, 'a');
	}
	else if ((top->n > midle->n) && (top->n < botom->n) && (midle->n < botom->n))
		swap(a, 'a');
	else if ((top->n < midle->n) && (top->n > botom->n) && (midle->n > botom->n))
			reverse_rotate(a, 'a');
}	
