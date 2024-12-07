/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:10:00 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/06 18:56:51 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_l **list, char c)
{
	t_l	*first_node;
	t_l	*last_node ;

	first_node = *list;
	last_node = *list;
	while (last_node->next != NULL)
		last_node = last_node->next;
	*list = first_node->next;
	first_node->next = NULL;
	first_node->prev = last_node;
	last_node->next = first_node;
	if (*list != NULL)
		(*list)->prev = NULL;
	if (c == 'a')
		ft_putstr("ra\n");
	else if (c == 'b')
		ft_putstr("rb\n");
}
