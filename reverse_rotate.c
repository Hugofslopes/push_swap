/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:17:16 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/06 18:51:50 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_l **list, char c)
{
	t_l	*last_node;

	last_node = *list;
	while (last_node->next != NULL)
		last_node = last_node->next;
	if (last_node->prev != NULL)
		last_node->prev->next = NULL;
	last_node->next = *list;
	last_node->prev = NULL;
	(*list)->prev = last_node;
	*list = last_node;
	if (c == 'a')
		printf("rra\n");
	else if (c == 'b')
		printf("rrb\n");
}
