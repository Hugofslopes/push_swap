/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:43:41 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/05 14:35:20 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_to_lists(t_l **a, t_l **b, int *array)
{
	size_t	i;
	t_l		*new_node;
	t_l		*curr;

	add_to_listb(b, a, array);
	i = 0;
	while (array[i])
	{
		new_node = malloc(sizeof(t_l));
		if (!new_node)
		{
			free(array);
			ft_lstclear(a);
			ft_lstclear(b);
			exit(1);
		}
		new_node->next = NULL;
		new_node->n = array[i];
		if (*a == NULL)
		{
			*a = new_node;
			i++;
			continue;
		}
		curr = *a;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = new_node;
		i++;
	}
	free(array);
}

void	add_to_listb(t_l **b, t_l **a, int *array)
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
			ft_lstclear(b);
			exit(1);
		}
		new_node->next = NULL;
		if (*b == NULL)
		{
			*b = new_node;
			i++;
			continue;
		}
		curr = *b;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = new_node;
		i++;
	}
}
