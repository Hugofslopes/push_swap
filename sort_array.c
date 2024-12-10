/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:20:19 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/10 22:22:11 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_array(long **array, size_t size) 
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
}

i = 0;
while (curr->n != array[i]
    curr = curr->next
curr->index = i;
    i++;


