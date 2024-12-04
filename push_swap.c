/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:07:44 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/04 16:24:10 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *push_swap(char **list, int argc)
{
	char	**list2;
	int		*list3;
	size_t	i;

	i = 0;
	if (argc > 2)
	{
		list2 = list;
		list3 = char_int_array(list2);
	}
	else
	{
		list2  = new_split(list[1], ' ');
		while (list2[i])
		printf("%10s\n", list2[i++]);
		puts ("\n");
		list3 = char_int_array(list2);
	}
	if (argc == 2)
		dealoc_(list2);
	i = 0;
	while (list3[i])
		printf("%10d\n", list3[i++]);

	return(list3);
}
