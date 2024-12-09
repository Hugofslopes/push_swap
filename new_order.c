/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_order.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:27:25 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/09 16:27:12 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order(t_l **a, t_l **b, size_t nr_nodes, int break_f)
{
	int	average;
	int	low_av;
	int	up_av;
	t_l	*curr;

		if (break_f == (int)nr_nodes)
		return ;
	break_f = 0;
	curr = *a;
	average = 0;
	average = calc_avg(curr, average, nr_nodes);
	low_av = average / 2;
	up_av = (average / 2) + average;


}
