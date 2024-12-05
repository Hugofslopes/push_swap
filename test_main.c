/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:37:40 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/12/05 16:08:38 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	*arrays;
	t_l		*a;
	t_l		*b;
	t_ps	*st;

	if (argc < 2 || !argv[1][0])
		return (0);
	st = malloc(sizeof(t_ps));
	st->a.next = NULL;
	st->b.next = NULL;
	arrays = push_swap(argv, argc, &st);
	free(arrays);
	return (0);
}
/* 
int main()
{
	int *arrays2;
	char *arrays[4];
	
	arrays[0] = "123";
	arrays[1] = "231";
	arrays[2] = "321";
	arrays[3] = NULL;

arrays2 = push_swap(arrays, 3);
	
	free(arrays2);
} */

/*
SA swap top of a 
SB swap top of b 
SS
PA push to a (1st ele)
PB push to b
RA rotate all of a 
RB rotate all of b
RR
RRA shift down A
RRB Shift down B
RRR

*/