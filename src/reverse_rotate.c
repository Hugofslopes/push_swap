/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:17:16 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/04/29 16:50:29 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate(t_l **list, char c)
{
	t_l	*last;
	t_l	*first;

	first = *list;
	last = first;
	while (last->next != NULL)
		last = last->next;
	*list = first->next;
	last->next = first;
	first->next = NULL;
	first->prev = last;
	if (*list != NULL)
		(*list)->prev = NULL;
	if (c == 'a')
		ft_putstr("rra\n");
	else if (c == 'b')
		ft_putstr("rrb\n");
}
