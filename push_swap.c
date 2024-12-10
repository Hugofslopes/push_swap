/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:07:44 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/10 21:47:35 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
SA swap top of a 
SB swap top of b 
SS
PA push to a (1st ele)
PB push to b
RA rotate all of a 
RB rotate all of b
RR
RRA shift down A
RRB Shift down B
RRR

*/

int	main(int argc, char **argv)
{
	t_l		*a;
	t_l		*b;

	a = NULL;
	b = NULL;
	if (argc < 2 || !argv[1][0])
		return (0);
	push_swap(argv, argc, &a, &b);
	return (0);
}

void	push_swap(char **argv, int argc, t_l **a, t_l **b)
{
	char	**list;
	long	*list2;
	size_t	nbr_nod;

	nbr_nod = 0;
	if (argc > 2)
	{
		list = argv + 1;
		list2 = char_int_array(list, &nbr_nod, argc);
	}
	else
	{
		list = new_split(argv[1], ' ');
		list2 = char_int_array(list, &nbr_nod, argc);
	}
	if (argc == 2)
		dealoc_(list);
	sort_array(&list2, nbr_nod);
	add_to_lists(a, list2, nbr_nod);
	while (!in_order(a))
	{
		if (nbr_nod == 2)
			swap(a, 'a');
		else if (nbr_nod == 3)
			order_3(a);
		else if (nbr_nod == 5)
			order_5(a, b);
		else
			order(a, b, nbr_nod, 0);
		break;
	}
	ft_lstclear(a);
	ft_lstclear(b);
}
