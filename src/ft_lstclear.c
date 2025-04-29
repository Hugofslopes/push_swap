/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- < hfilipe-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:46:15 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/04/29 16:49:41 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_lstclear(t_l **lst)
{
	t_l	*tmp;
	t_l	*curr;

	curr = *lst;
	while (curr != NULL)
	{
		tmp = curr;
		curr = curr->next;
		free (tmp);
	}
	*lst = NULL;
}
