/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:10:00 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/10 16:39:02 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_l **list, char c)
{
	t_l	*frst;
	t_l	*lst;
	t_l	*curr;
	int	tmp;
	int	tmp2;

	frst = *list;
	lst = *list;
	curr = *list;
	while (frst->next != NULL)
		frst = frst->next;
	tmp = lst->n;
	lst->n = frst->n;
	curr = curr->next;
	tmp2 = curr->n;
	curr->n = tmp;
	while (curr->next != NULL)
	{
		curr = curr->next;
		tmp = curr->n;
		curr->n = tmp2;
	}
	if (c == 'a')
		ft_putstr("ra\n");
	else if (c == 'b')
		ft_putstr("rb\n");
}
