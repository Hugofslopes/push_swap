/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:10:00 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/10 20:13:41 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_l **list, char c)
{
	t_l	*first;
    t_l	*curr;
	int first_value;
	int	last_value;
	int	temp;

	first = *list;
	curr = first;
    first_value = first->n;
    while (curr->next != NULL)
        curr = curr->next;
    last_value = curr->n; 
    curr = first; 
	first->n = last_value;
    while (curr->next != NULL)
	{
        temp = curr->next->n; 
        curr->next->n = first_value; 
        first_value = temp; 
        curr = curr->next;
	}
	if (c == 'a')
		ft_putstr("ra\n");
	else if (c == 'b')
		ft_putstr("rb\n");
}
