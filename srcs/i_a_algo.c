/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_a_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 01:12:46 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 15:33:18 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/i_a.h"
#include "../includes/main.h"

int			nb_are_align(int **tab, t_crd c, int sym, int nb)
{
	return (1);
}

void		play_to_win(t_puiss *p4, t_crd c, int style)
{
}

void		i_a_try_win(t_puiss *p4)
{
	
	int		style;
	t_crd	c;

	c.l = 0;
	while (c.l <p4->nb_lines)
	{
		c.c = 0;
		if (p4->array[c.l][c.c] == NUM_IA)
		{
			if ((style = nb_are_align(p4->array, c, NUM_IA, 3)) != 0)
				play_to_win(p4, c, style);
		}
		c.c++;
	}
	c.l++;
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
