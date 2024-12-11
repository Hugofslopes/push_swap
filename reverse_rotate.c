/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:17:16 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/11 13:11:35 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		ft_putstr("ra\n");
	else if (c == 'b')
		ft_putstr("rb\n");
}
