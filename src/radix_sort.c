/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:07:44 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/04/29 16:50:21 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*get_bits2(int number)
{
	int	*nbr;
	int	i;

	i = 9;
	nbr = ft_calloc(10, sizeof(int));
	if (!nbr)
		return (NULL);
	while (number)
	{
		nbr[i--] = number % 2;
		number /= 2;
	}
	return (nbr);
}

int	check_bin_lis(t_l **a, int i, int va)
{
	int	*array;
	t_l	*curr;

	curr = *a;
	while (curr)
	{
		array = get_bits(array, curr->index);
		if (array[i] == va)
			return (1);
		curr = curr->next;
	}
	return (0);
}

int	check_bin(int nbr, int i, int va)
{
	int	*array;

	array = get_bits2(nbr);
	if (array[i] == va)
		return (free(array), 1);
	else
		return (free(array), 0);
	return (0);
}

void	radix_sortb(t_l **a, t_l **b)
{
	while (*b)
		push(b, a, 'a');
	if (in_order(a))
	{
		ft_lstclear(a);
		ft_lstclear(b);
		exit(1);
	}
}

void	radix_sort(t_l **a, t_l **b, int nr_nodes)
{
	int	i;
	int	size;

	i = 9;
	size = nr_nodes;
	while (i >= 0)
	{
		size = nr_nodes;
		while (size--)
		{
			if (check_bin(get_first_node_index(a), i, 1))
				rotate(a, 'a');
			else
				push(a, b, 'b');
		}
		radix_sortb(a, b);
		i--;
	}
}
