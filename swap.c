/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:12:51 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/16 19:16:04 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_l **list, char c)
{
	t_l	*curr;
	int	tmp;
	int	tmp_ind;

	curr = *list;
	if (curr->next == NULL)
		return ;
	while (curr->next->next != NULL)
		curr = curr->next;
	tmp = curr->n;
	tmp_ind = curr->index;
	curr->n = curr->next->n;
	curr->index = curr->next->index;
	curr->next->n = tmp;
	curr->next->index = tmp_ind;
	curr->next->next = NULL;
	curr->next->prev = curr;
	if (c == 'a')
		ft_putstr("sa\n");
	else if (c == 'b')
		ft_putstr("sb\n");
}
