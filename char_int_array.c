/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_int_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:50:31 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/04 16:20:20 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *char_int_array(char **str)
{
	size_t	i;
	size_t	j;
	size_t	ct_a;
	int		*array;

	ct_a = count_arrays(str);
	array = malloc (ct_a * sizeof(int));
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j] == 32 || (str[i][j]  >= 9 && str[i][j]  <= 13))
			j++;
		if (str[i][j]== '-' || str[i][j] == '+')
			if (str[i][j++] == '-')
				array[j] = '-';
		while (str[i][j] && str[i][j] >= '0' && str[i][j] <= '9')
		{
			array[j] = array[j] * 10 + (str[i][j]) - 48;
			j++;
		}
		i++;
	}
	return (array);
}

size_t	count_arrays(char **str)
{
	size_t	i;
	
	i = 0;
	while(str[i])
		i++;
	return (i);
}