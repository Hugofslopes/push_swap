/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:07:44 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/05 16:14:52 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*push_swap(char **list, int argc, t_ps **st)
{
	char	**list2;
	int		*list3;

	if (argc > 2)
	{
		(*st)->strgs = list + 1;
		(*st)->array = char_int_array((*st)->strgs);
	}
	else
	{
		(*st)->strgs = new_split(list[1], ' ');
		(*st)->array = char_int_array((*st)->strgs);
	}
	if (argc == 2)
		dealoc_(list2);
	add_to_lists((*st)->a , (*st)->b, list3);
	puts("listA");
	for (t_l *curr = (*st).a; curr != NULL ; curr = curr->next)
		printf("%10d\n", curr->n);
	puts("listB");
	for (t_l *curr3 = (*st)->array; curr3 != NULL ; curr3 = curr3->next)
		printf("%10d\n", curr3->n);
	swap(a);
	puts("\n");
	puts("listA");
	for (t_l *curr2 = *a; curr2 != NULL ; curr2 = curr2->next)
		printf("%10d\n", curr2->n);
	push(a, (*a)->next, b);
	puts("\n");
	puts("listb");
	for (t_l *curr4 = *b; curr4 != NULL ; curr4 = curr4->next)
		printf("%10d\n", curr4->n);
	return ("ar");
}
