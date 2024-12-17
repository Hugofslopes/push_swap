/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:54:45 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/17 16:02:00 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_index(t_l **b)
{
	int	max;
	t_l	*curr;

	curr = *b;
	max = -1;
	while (curr)
	{
		if (curr->index > max)
			max = curr->index;
		curr = curr->next;
	}
	return (max);
}

int	calc_nr_nodes(t_l **a)
{
	int	n;
	t_l	*curr;

	n = 0;
	curr = *a;
	while (curr)
	{
		n++;
		curr = curr->next;
	}
	return (n);
}

int	smaller_av(int n, t_l **a)
{
	t_l	*curr;

	curr = *a;
	while (curr)
	{
		if (curr->index < n)
			return (0);
		curr = curr->next;
	}
	return (1);
}

int	calc_avg(t_l *curr)
{
	int	max;

	max = 0;
	while (curr != NULL)
	{
		if (curr->index > max)
			max = curr->index;
		curr = curr->next;
	}
	return (max / 2);
}
