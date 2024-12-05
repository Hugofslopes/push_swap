/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:42:03 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/05 16:14:53 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_l **a, t_l *an, t_l **b)
{
	t_l	*curr;
	t_l	*curra;
	int	n;

	curr = *b;
	n = an->n;
	while (curr->next != NULL)
		curr = curr->next;
	curr->n = n;
	curra = *a;
	if (curra->n != n)
	{
		while (curra->next->n != n && curra->next != NULL)
			curra = curra->next;
	}
	curra->next =curra->next->next;
	free(an);
}
d