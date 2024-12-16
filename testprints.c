/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testprints.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:50:02 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/16 10:29:54 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test_prints(t_l **a, t_l **b)
{
	puts("listA");
	for (t_l * curr = *a; curr != NULL; curr = curr->next)
		printf("%10d\t%10d\n",curr->index, curr->n);
	puts("listB");
	for (t_l * curr3 = *b; curr3 != NULL; curr3 = curr3->next)
		printf("%10d\t%10d\n",curr3->index, curr3->n);
}
