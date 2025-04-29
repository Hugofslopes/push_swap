/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inorder.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:11:17 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/04/29 16:49:52 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	in_order(t_l **a)
{
	t_l	*curr;

	curr = *a;
	while (curr->next != NULL)
	{
		if (curr->n < curr->next->n)
			return (0);
		curr = curr->next;
	}
	return (1);
}
