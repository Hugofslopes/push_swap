/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 09:33:41 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/09 13:01:29 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bzero(void *ptr, size_t n)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)ptr;
	while (i < n)
		str[i++] = '\0';
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_bytes;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total_bytes = nmemb * size;
	if ((total_bytes / size) != nmemb)
		return (NULL);
	ptr = malloc(total_bytes);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_bytes);
	return (ptr);
}
