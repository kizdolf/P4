/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_a_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 01:12:46 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 15:09:59 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/i_a.h"
#include "../includes/main.h"

void		i_a_try_win(t_puiss *p4)
{
	/*
	int		i;
	int		j;
	int		style;

	i = 0;
	while (i <p4->nb_lines)
	{
		j = 0;
		if (p4->array[i][j] == NUM_IA)
		{
			if ((style = three_align(p4->array, i, j, NUM_IA)) != 0)
				return (play_to_win(p4, i, j, style);
		}
		j++;
	}
	i++;
	*/
}

int			i_a_puiss(t_puiss *p4)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < p4->nb_col)
	{
		j = 0;
		while (i < p4->nb_lines)
		{
			if (p4->array[i][j] == 0)
			{
				while (i + 1 < p4->nb_lines && p4->array[i + 1][j] == 0)
					i++;
				p4->array[i][j] = NUM_IA;
				p4->coins_ia--;
				return (2);
			}
			j++;
		}
		i++;
	}
	return (0);
}
