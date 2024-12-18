/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:07:44 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/18 13:22:30 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int	*get_bits(int *array2, int number);

int main(int ac , char**av)
{	
	(void)ac;
	int *array;

	array = get_bits(array, atoi(av[1]));

	for (int i = 0; i <=9; i++)
	{
		printf("%5d", array[i]);
	}

}