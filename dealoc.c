/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dealoc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:50:31 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/19 10:00:50 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dealoc_(char **list)
{
	size_t	i;

	i = 0;
	while (list[i])
		free(list[i++]);
	free (list);
}
