/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_int_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:50:31 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/06 21:29:53 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*char_int_array(char **str, size_t *i)
{
	size_t	ct_a;
	int		*array;
	int		sign;

	sign = 1;
	ct_a = count_arrays(str);
	array = malloc (ct_a * sizeof(int *));
	if (!array)
		exit(1);
	array = char_int_arrayb(str, array, sign, i);
	return (array);
}

int	*char_int_arrayb(char **str, int *array, int sign, size_t *i)
{
	size_t	j;

	while (str[*i])
	{
		j = 0;
		while (str[*i][j] == 32 || (str[*i][j] >= 9 && str[*i][j] <= 13))
			j++;
		if (str[*i][j] == '-' || str[*i][j] == '+')
			if (str[*i][j++] == '-')
				sign = -1;
		while (str[*i][j] && str[*i][j] >= '0' && str[*i][j] <= '9')
		{
			array[*i] = array[*i] * 10 + (str[*i][j]) - 48;
			j++;
		}
		if (sign == -1)
			array[*i] *= -1;
		(*i)++;
	}
	return (array);
}

size_t	count_arrays(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
