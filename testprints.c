/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testprints.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:50:02 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/07 10:52:55 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void test_prints(t_l **a, t_l **b)
{
		puts("listA");
	for (t_l *curr = *a; curr != NULL ; curr = curr->next)
		printf("%10d\n", curr->n);
	puts("listB");
	for (t_l *curr3 = *b; curr3 != NULL ; curr3 = curr3->next)
		printf("%10d\n", curr3->n);
	
	// swap(a, 'a');
	// puts("\n");
	// puts("listA");
	// for (t_l *curr2 = *a; curr2 != NULL ; curr2 = curr2->next)
	// 	printf("%10d\n", curr2->n);
	// push(a, b, 'b');
	// puts("\n");
	// puts("listb");
	// for (t_l *curr4 = *b; curr4 != NULL ; curr4 = curr4->next)
	// 	printf("%10d\n", curr4->n);

	// puts("\n");
	// puts("lista");
	// for (t_l *curr5 = *a; curr5 != NULL ; curr5 = curr5->next)
	// 	printf("%10d\n", curr5->n);

	// rotate(a, 'a');
	// puts("lista");
	// for (t_l *curr6 = *a; curr6 != NULL ; curr6 = curr6->next)
	// 	printf("%10d\n", curr6->n);

	// reverse_rotate(a, 'a');
	// puts("lista");
	// for (t_l *curr7 = *a; curr7 != NULL ; curr7 = curr7->next)
	// printf("%10d\n", curr7->n);
	// ft_lstclear(a);
	// ft_lstclear(b);
}
