/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inorder.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:11:17 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/10 16:31:03 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	in_order(t_l **a)
{
	t_l	*curr;
	int min;

	curr = *a;
	while (curr->next != NULL)
	{
		if (curr->n < curr->next->n)
			return (0);
		curr = curr->next;
	}
	return (1);
}
