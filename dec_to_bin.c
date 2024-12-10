/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_to_bin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:54:45 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/10 20:13:57 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void dec_to_bin(int n)
{
	int	array[32];
	int i;
	
	i = 32;
	ft_bzero(array, 32);
	
	while (i)
	{
		array[--i] = n % 2;
		n /= 2;
	}
	i = 0;
	while (i < 32)
	printf("%2d", array[i++]);
}