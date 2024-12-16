/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:54:45 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/16 19:27:51 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void index_to_bin(t_l **a);



int calc_nr_nodes(t_l **a)
{
    int n;
    t_l *curr;

    n = 0;
    curr = *a;
    while (curr)
    {
        n++;
        curr = curr->next;
    }
    return (n);
}

void index_to_bin(t_l **a)
{
	t_l *curr;

	curr = *a;
    int n;
	while (curr)
	{
        n = curr->index;    
		dec_to_bin(n , &curr->index_b);
        curr = curr->next;
	}
}

int smaller_av(int n ,t_l **a)
{
    t_l *curr;

    curr = *a;
    while(curr)
    {
        if (curr->index < n)
            return (0);
        curr = curr->next;
    }
    return(1);
}

int get_second_node_index(t_l **list)
{
	t_l *curr;

	curr = *list;
    if (curr->next)
    {
        if (curr->next->next)
        {
            while(curr->next->next != NULL)
                curr = curr->next;
        }
        return (curr->index);
    }
    else
        return (-1);
	
}
void radixb(t_l **a, t_l **b);

void radix(t_l **a, t_l **b )
{
    int n;
    n = (calc_avg(*a) * 2);
    int n2;
    n2 = n;
    n /= 7;
    //index_to_bin(a);
    while (calc_nr_nodes(a))
    {
        while (get_first_node_index(a) >= n)
        {
            if ((*a)->index < n)
                reverse_rotate(a, 'a');
            else if (get_second_node_index(a) < n)
            {
                swap(a, 'a');
                
            }
            else
                rotate(a, 'a');
        }
        if (get_first_node_index(a) < n)
        {
            push(a , b, 'b');
            if ((*b)->next != NULL)
            {
                if (get_first_node_index(b) < (*b)->index)
                    rotate(b, 'b');
                if (get_first_node_index(b) < get_second_node_index(b))
                    swap(b, 'b');
                else if (get_second_node_index(b) < (*b)->index)
                {
                    swap(b, 'b');
                    rotate(b, 'b');
                }
            }
        }    
        if ((smaller_av(n , a)))
            n = n  + (n2 / 7);
    }
    radixb( a, b);
}

int get_max_index(t_l **b)
{
    int max;
    t_l *curr;

    curr = *b;
    max = -1;
    while(curr)
    {
        if (curr->index > max)
            max = curr->index;
        curr = curr->next;
    }
    return (max);
}
void radixb(t_l **a, t_l **b)
{
    int count;
    count = 0;

    while(*b)
    {
        count = 0;
        while (get_first_node_index(b) != get_max_index(b))
        {
            if (get_second_node_index(b) == get_max_index(b))
            {
                swap(b, 'b');
                break;
            }
            else
            {
                rotate(b, 'b');
                count++;
            }
        }
        push(b ,a, 'a');
        while (count)
        {
            reverse_rotate(b,'b');
            count--;
        }
    }
}
