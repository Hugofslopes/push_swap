/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testprints.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:50:02 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/15 17:57:01 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test_prints(t_l **a, t_l **b)
{
	puts("listA");
	for (t_l * curr = *a; curr != NULL; curr = curr->next)
		printf("%10ld\t%10d\n",curr->index, curr->n);
	puts("listB");
	for (t_l * curr3 = *b; curr3 != NULL; curr3 = curr3->next)
		printf("%10ld\t%10d\n",curr3->index, curr3->n);
}
