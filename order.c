/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:15:15 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/16 19:28:58 by hfilipe-         ###   ########.fr       */
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
	else if (get_first_node_index(b) >= average)
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

void orderb(t_l **a, t_l **b);
void define_moves(char **moves_a, char **moves_b, t_l **a, t_l **b, int average);
void implement_moves(char* moves_a, char* moves_b, t_l **a, t_l **b);

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
		else
		{
			define_moves(&moves_a, &moves_b, a, b, average);
			implement_moves(moves_a, moves_b, a, b);
		}	
	}
	orderb(a, b);
	while (*b)
		push (b, a, 'a');
	return (1);
}

void define_moves(char **moves_a, char **moves_b, t_l **a, t_l **b, int average)
{
		if (get_first_node_index(a) >= average)
			(*moves_a) = "ra";
		if (get_first_node_index(a) < average)
			(*moves_a) = "pb";
		if (get_first_node_index(b) < average)
			(*moves_b) = "rb";
		if (get_first_node_index(b) >= average)
			(*moves_b) = "pa";
}

void implement_moves(char* moves_a, char* moves_b, t_l **a, t_l **b)
{
	if (ft_strcmp(moves_a, "pb") && ft_strcmp(moves_b, "pa"))
		{
			push(a, b, 'b');
			rotate(b, 'b');
			push(b, a, 'a');
			rotate(a, 'a');
		}
		else if (ft_strcmp(moves_a,"ra") && ft_strcmp(moves_b,"rb"))
			rr(a, b);
		else if (ft_strcmp(moves_a, "pb") && ft_strcmp(moves_b, "rb"))
		{
			push(a ,b, 'b');
			rotate(b, 'b');
			rotate(b, 'b');
		}
		else if (ft_strcmp(moves_a, "ra") && ft_strcmp(moves_b, "pa"))
		{
			push(b ,a, 'a');
			rotate(a, 'a');
			rotate(a, 'a');
		}
}
void	aplysecond_a(int average_a, t_l **a);
void	aplysecond_b(int average_b, t_l **b);
void	aplysecond(char *moves_a, char * moves_b,t_l **a, t_l **b);


void orderb(t_l **a, t_l **b)
{
	int	average_a;
	int	average_b;
	t_l	*curr;
	char *moves_a;
	char *moves_b;

	curr = *a;
	average_a = calc_avg(*a);
	average_b = calc_avg(*b);
	moves_a = "aa";
	moves_b = "bb";

	while (get_first_node_index(a) > average_a || \
	get_first_node_index(b) < average_b)
	{
		if (get_first_node_index(a) > average_a && \
		!(get_first_node_index(b)) )
			aplysecond_a(average_a, a);
		else if (!(get_first_node_index(a) > average_a && \
		(get_first_node_index(b)) ))
			aplysecond_b(average_b, b);
		else
		{
			if (get_first_node_index(a) >= average_a)
				moves_a = "ra";
			else if (get_first_node_index(a) < average_a)
				moves_a = "sa";
			if (get_first_node_index(b) < average_b)
				moves_b = "rb";
			else if (get_first_node_index(b) >= average_b)
				moves_b = "sb";
			aplysecond(moves_a, moves_b, a, b);
		}
	}
}
void	aplysecond_a(int average_a, t_l **a)
{
	if (get_first_node_index(a) >= average_a)
		rotate(a , 'a');
	else if (get_first_node_index(a) < average_a)
		swap(a, 'a');
}

void	aplysecond_b(int average_b, t_l **b)
{
	if (get_first_node_index(b) < average_b)
		rotate(b , 'b');
	else if (get_first_node_index(b) >= average_b)
		swap(b, 'b');

}
void	aplysecond(char *moves_a, char * moves_b,t_l **a, t_l **b)
{
	if (ft_strcmp(moves_a, "ra") && ft_strcmp(moves_b, "rb"))
		rr(a,b);
	else if (ft_strcmp(moves_a, "sa") && ft_strcmp(moves_b, "sb"))
		ss(a,b);
	else if (ft_strcmp(moves_a, "sa") && ft_strcmp(moves_b, "rb"))
	{
		rotate(b, 'b');
		swap(a, 'a');
	}
	else if (ft_strcmp(moves_a, "ra") && ft_strcmp(moves_b, "sb"))
	{
		rotate(a, 'a');
		swap(b, 'b');
	}
}

// fazer media dos que que tenho
// contar o nr de nodes 

// A - top maior que a media (rotate)
// A- top menor qe a media (swap)
// B - top menor que a media (rotate)

