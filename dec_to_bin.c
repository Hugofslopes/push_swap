/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_to_bin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:54:45 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/15 18:17:11 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *dec_to_bin(int n, int *array2)
{
	int	array[32];
	int i;
	
	array2 = array;
	i = 32;
	ft_bzero(array, 32);
	
	while (i)
	{
		array[--i] = n % 2;
		n /= 2;
	}
	return (array2);
}