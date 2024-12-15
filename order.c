/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:15:15 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/15 18:40:35 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int get_first_node_index(t_l **list)
{
	t_l *curr;

	curr = *list;
	while(curr->next != NULL)
		curr = curr->next;
	return (curr->index);
}

void only_a(t_l **a, t_l **b, int average )
{
	if (get_first_node_index(a) >= average)
		rotate(a, 'a');
	else if (get_first_node_index(a) < average)
		push(a, b, 'b');
}

void only_b(t_l **a, t_l **b, int average )
{
	if (get_first_node_index(b) < average)
		rotate(b, 'b');
	else if (get_first_node_index(a) < average)
		push(b, a, 'a');
}

int check_a(t_l **a, int average)
{
	t_l *curr;
	int n = 0;

	curr = *a;
	while (curr)
	{
		if (curr->index < average)
			return (1);
		curr = curr->next;
	}
	return (0);
}

int check_b(t_l **b, int average)
{
	t_l *curr;
	curr = *b;
	while (curr)
	{
		if (curr->index >= average)
			return (1);
		curr = curr->next;
	}
	return (0);
}

int	calc_avg(t_l *curr)
{
    int min = 2147483647;
    int max = 0;

    while (curr != NULL) 
	{
		if (curr->index > max)
			max = curr->index;
        curr = curr->next;
    }
	return (max / 2) ;
}

void radix(t_l **a, t_l **b);

int	order(t_l **a, t_l **b, size_t nr_nodes)
{
	int	average;
	t_l	*curr;
	char *moves_a;
	char *moves_b;
	int n;

	n = 0;
	curr = *a;
	average = calc_avg(*a);
	moves_a = "aa";
	moves_b = "bb";
	while (n < (nr_nodes / 2))
	{
		push(a , b ,'b');
		n++;
	}
	while (check_a(a, average) || check_b(b, average))
	{
		if (check_a(a, average) == 0)
			only_b (a, b, average);
		else if (check_b(b, average) == 0)
			only_a (a, b, average);
		if (get_first_node_index(a) >= average)
			moves_a = "ra";
		if (get_first_node_index(a) < average)
			moves_a = "pb";
		if (get_first_node_index(b) < average)
			moves_b = "rb";
		if (get_first_node_index(b) >= average)
			moves_b = "pa";
		if (moves_a == "pb" && moves_b == "pa")
			pp(a, b);
		else if (moves_a == "ra" && moves_b == "rb")
			rr(a, b);
		else if (moves_a == "pb" && moves_b == "rb")
		{
			push(a ,b, 'b');
			rotate(b, 'b');
			rotate(b, 'b');
		}
		else if (moves_a == "ra" && moves_b == "pa")
		{
			push(b ,a, 'a');
			rotate(a, 'a');
			rotate(a, 'a');
		}
	}
	while (*b)
		push (b, a, 'b');
	test_prints(a, b);
	radix(a, b);
	return (1);
}
void radix(t_l **a, t_l **b)
{
	t_l *curr;

	curr = *a;

	int i = 90;
	while (curr)
	{
		curr->index_b = dec_to_bin(curr->index, curr->index_b);
		while(i < 32)
		printf("%20d\n",curr->index_b[i++]);
		curr = curr->next;
	}
}

