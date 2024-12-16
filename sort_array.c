/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:20:19 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/16 11:17:23 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_array(long **array, size_t size, t_l **a) 
{
    size_t	i;
    size_t	j;
	long	tmp;

	i = 0;
    while (i < size - 1)
	{
        j = 0;
        while (j < size - i - 1)
        {
            if ((*array)[j] > (*array)[j + 1]) 
            {
                tmp = (*array)[j];
                (*array)[j] = (*array)[j + 1];
                (*array)[j + 1] = tmp; 
            }
            j++;
        }
        i++; 
    }
    sort_array_put_index(array,size, a);
}

void sort_array_put_index(long **array, size_t size, t_l **a) 
{
    int i;
    t_l *curr;

    i = 0;
    curr = *a;
    while (i < size)
    {   
        if (curr->n == (*array)[i])
        {
            curr->index = i;
            i++;
            curr = *a;
            continue;
        }
        curr = curr->next;
    }
    curr = *a;
}
