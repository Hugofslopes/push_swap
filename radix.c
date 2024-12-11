/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:40:37 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/11 15:46:22 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void radixSort(t_l **list) {
    int nr_nodes;
    t_l *curr;
    int *array;
    size_t i;

    i = 0;
    nr_nodes = 0;
    curr = *list;
    while (curr)
    {
        curr = curr->next;
        nr_nodes++;
    }
    
    array = malloc(nr_nodes * sizeof(int));
    curr = *list;
    while (curr)
    {
        array[i++] = curr->index;
        curr = curr->next;
    }
 

    size_t	j;
	int	tmp;

	i = 0;
    while (i < nr_nodes)
	{
        j = 0;
        while (j < nr_nodes - i)
        {
            if (array[j] > array[j + 1]) 
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp; 
            }
            j++;
        }
        i++; 
    }


t_l *frst;
curr = *list;
while (curr->next != NULL)
    curr = curr->next;
frst = curr;

i = 0;
    while (array[i])
    {
        curr = *list;
        while (curr != frst)
            curr = curr->next;
        frst = curr;
        if (curr->index == array[i])
        {
            i++;
        }
        else
            rotate(list, 'a');
    }
}
