/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:23:52 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/06 18:52:00 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pp(t_l **a, t_l **b)
{
	push(a, b, 'p');
	push(b, a, 'p');
	ft_putstr("pp\n");
}