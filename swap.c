/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:12:51 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/05 14:40:01 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_l **list)
{
	t_l *curr;
	int tmp;

	curr = *list;
	if (curr->next != NULL)
	{
		while (curr->next->next != NULL)
			curr = curr->next;
	}
	tmp = curr->n;
	curr->n = curr->next->n;
	curr->next->n = tmp;
}