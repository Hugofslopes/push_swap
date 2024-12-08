/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:12:51 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/06 18:47:38 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_l **list, char c)
{
	t_l	*curr;
	int	tmp;

	curr = *list;
	if (curr->next != NULL)
	{
		while (curr->next->next != NULL)
			curr = curr->next;
	}
	tmp = curr->n;
	curr->n = curr->next->n;
	curr->next->n = tmp;
	if (c == 'a')
		ft_putstr("sa\n");
	else if (c == 'b')
		ft_putstr("sb\n");
}
