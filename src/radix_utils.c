/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:07:44 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/04/29 16:50:25 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_second_node_index(t_l **list)
{
	t_l	*curr;

	curr = *list;
	if (curr->next)
	{
		if (curr->next->next)
		{
			while (curr->next->next != NULL)
				curr = curr->next;
		}
		return (curr->index);
	}
	else
		return (-1);
}

int	get_first_node_index(t_l **list)
{
	t_l	*curr;

	curr = *list;
	while (curr->next != NULL)
		curr = curr->next;
	return (curr->index);
}

int	*get_bits(int *array2, int number)
{
	int	nbr[10];
	int	i;
	int	j;

	i = 9;
	j = 0;
	while (j <= 9)
		nbr[j++] = '\0';
	while (number)
	{
		nbr[i--] = number % 2;
		number /= 2;
	}
	array2 = nbr;
	return (array2);
}
