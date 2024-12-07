/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:43:41 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/06 19:08:20 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_to_lists(t_l **a, int *array)
{
	size_t	i;
	t_l		*new_node;
	t_l		*curr;

	i = 0;
	while (array[i])
	{
		new_node = malloc(sizeof(t_l));
		if (!new_node)
		{
			free(array);
			ft_lstclear(a);
			exit(1);
		}
		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->n = array[i++];
		if (*a == NULL)
			*a = new_node;
		else
			add_to_listsb(&curr, &new_node, a);
	}
	free(array);
}

void	add_to_listsb(t_l **curr, t_l **new_node, t_l **a)
{
	*curr = *a;
	while ((*curr)->next != NULL)
		*curr = (*curr)->next;
	(*curr)->next = *new_node;
	(*new_node)->prev = *curr;
}
