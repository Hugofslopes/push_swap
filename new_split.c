/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:08:34 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/05 11:43:17 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	count_words(char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i])
				i++;
		}
		i++;
	}
	return (count);
}

size_t	count_char(char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			while (str[i] != c && str[i])
			{
				i++;
				count++;
			}
			return (count);
		}
		i++;
	}
	return (0);
}

void	dealoc(char **strgs)
{
	size_t	i;

	i = 0;
	while (strgs[i])
		free (strgs[i++]);
	free(strgs);
}

void	c_strgs( char *str, char **strgs, char c)
{
	size_t	nbr_c;
	size_t	i;
	size_t	j;

	i = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		j = 0;
		nbr_c = count_char(str, c);
		strgs[i] = malloc((nbr_c * sizeof(char)) + 1);
		if (!strgs)
		{
			dealoc(strgs);
			return ;
		}
		while (*str != c && *str)
			strgs[i][j++] = *str++;
		strgs[i][j] = '\0';
		i++;
	}
	strgs[i] = 0;
}

char	**new_split(char *str, char c)
{
	size_t	ct_w;
	char	**strgs;

	ct_w = count_words(str, c);
	strgs = malloc((ct_w * sizeof(char *)) + 1);
	if (!strgs)
		return (NULL);
	c_strgs(str, strgs, c);
	return (strgs);
}
