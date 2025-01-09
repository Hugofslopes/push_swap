/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_int_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:50:31 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/19 09:51:08 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*array_errors2(long *array)
{
	ft_putstr_err("Error\n");
	free(array);
	array = NULL;
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

void	array_errors(char **str, int argc)
{
	if (argc == 2)
		dealoc_(str);
}

long	*char_int_arrayb(char **str, long *array, int sign, size_t *i)
{
	size_t	j;

	while (str[*i])
	{
		j = 0;
		sign = 1;
		if (!((str[*i][j] >= '0' && str[*i][j] <= '9') || \
		(str[*i][j] == '-') || (str[*i][j] == '+')))
			return (array_errors2(array));
		if (str[*i][j] == '-' || str[*i][j] == '+')
			if (str[*i][j++] == '-')
				sign = -1;
		while (str[*i][j] && str[*i][j] >= '0' && str[*i][j] <= '9')
			array[*i] = array[*i] * 10 + (str[*i][j++]) - 48;
		if (!(str[*i][j] >= '0' && str[*i][j] <= '9' || str[*i][j] == ' ' || \
		str[*i][j] == '\0'))
			return (array_errors2(array));
		if (sign == -1)
			array[*i] *= -1;
		if (array[*i] > 2147483647 || array[*i] < -2147483648)
			return (array_errors2(array));
		(*i)++;
	}
	return (array);
}

long	*char_int_array(char **str, size_t *i, int argc)
{
	size_t	ct_a;
	long	*array;
	int		sign;

	sign = 1;
	ct_a = count_arrays(str);
	array = ft_calloc(ct_a, sizeof(long *));
	if (!array)
	{
		array_errors(str, argc);
		exit(1);
	}
	array = char_int_arrayb(str, array, sign, i);
	if (!array)
	{
		array_errors(str, argc);
		exit(1);
	}
	return (array);
}
