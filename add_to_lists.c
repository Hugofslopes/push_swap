/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:43:41 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/10 16:39:01 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_to_lists(t_l **a, long *array, size_t nr_nod)
{
	size_t	i;
	t_l		*new_node;
	t_l		*curr;

	i = 0;
	while (i < nr_nod)
	{
		new_node = ft_calloc(sizeof(t_l), 1);
		if (!new_node)
		{
			free(array);
			ft_lstclear(a);
			exit(1);
		}
		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->n = array[--nr_nod];
		if (*a == NULL)
			*a = new_node;
		else
			add_to_listsb(&curr, &new_node, a);
	}
	free(array);
	if (!check_equal_n(a))
		exit_clean(a);
}

void	add_to_listsb(t_l **curr, t_l **new_node, t_l **a)
{
	*curr = *a;
	while ((*curr)->next != NULL)
		*curr = (*curr)->next;
	(*curr)->next = *new_node;
	(*new_node)->prev = *curr;
}

int	check_equal_n(t_l **a)
{
	t_l	*curr;
	t_l	*curr2;

	curr = *a;
	curr2 = (*a)->next;
	while (curr->next != NULL)
	{
		while (curr2->next != NULL)
		{
			if (curr2->n == curr->n)
				return (0);
			curr2 = curr2->next;
		}
		if (curr2->n == curr->n)
			return (0);
		curr = curr->next;
		curr2 = curr->next;
	}
	return (1);
}

void	exit_clean(t_l **a)
{
	ft_lstclear(a);
	ft_putstr_err("Error\n");
	exit(1);
}
