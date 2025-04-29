/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:10:00 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/04/29 16:50:35 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_l **list, char c)
{
	t_l	*last;
	t_l	*second_last;

	last = *list;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *list;
	last->prev = NULL;
	(*list)->prev = last;
	*list = last;
	if (c == 'a')
		ft_putstr("ra\n");
	else if (c == 'b')
		ft_putstr("rb\n");
}
