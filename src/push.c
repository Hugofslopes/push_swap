/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:42:03 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/04/29 18:17:15 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	b_not_null(t_l *top_b, t_l **new_node)
{
	if (top_b->next != NULL)
	{
		while (top_b->next != NULL)
			top_b = top_b->next;
	}
	top_b->next = (*new_node);
	(*new_node)->prev = top_b;
}

void	pushb(t_l **a, t_l **b, t_l **new_node)
{
	t_l	*top_a;

	top_a = *a;
	if (top_a != NULL)
	{
		while (top_a->next != NULL)
			top_a = top_a->next;
	}
	(*new_node)->n = top_a->n;
	(*new_node)->index = top_a->index;
	(*new_node)->next = NULL;
	(*new_node)->prev = NULL;
	if (*b == NULL)
		*b = *new_node;
	else
		b_not_null(*b, new_node);
	if (top_a->prev != NULL)
		top_a->prev->next = NULL;
	else
		*a = NULL;
	free(top_a);
}

void	push(t_l **a, t_l **b, char c)
{
	t_l	*new_node;

	new_node = malloc(sizeof(t_l));
	if (!new_node)
	{
		ft_lstclear(a);
		ft_lstclear(b);
		exit(1);
	}
	pushb(a, b, &new_node);
	if (c == 'a')
		ft_putstr("pa\n");
	else if (c == 'b')
		ft_putstr("pb\n");
}
