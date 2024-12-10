/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:17:16 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/10 16:17:16 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_l **list, char c)
{
	t_l	*frst;
	t_l	*lst;
	t_l	*curr;
	int	tmp;

	frst = *list;
	lst = *list;
	curr = *list;
	while (frst->next != NULL)
		frst = frst->next;
	tmp = frst->n;
	frst->n = lst->n;
	while (curr->next->next != NULL)
	{
		curr->n = curr->next->n;
		curr = curr->next;
	}
	curr->n = tmp;
	if (c == 'a')
		printf("rra\n");
	else if (c == 'b')
		printf("rrb\n");
}
