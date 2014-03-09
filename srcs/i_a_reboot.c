/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_a_reboot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 19:50:58 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 22:23:53 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/i_a.h"

static int				win(t_puiss *p4, int l, int c, int sym)
{
	if (c + 3 < p4->nb_col && p4->array[l][c + 1] == sym && \
			p4->array[l][c + 2] == sym && p4->array[l][c + 3] == 0)
		return (c + 3);
	if (l + 2 < p4->nb_lines && l - 1 >= 0 && p4->array[l + 1][c] == sym && \
			p4->array[l - 1][c] == 0)
		return (c);
	if (l + 3 < p4->nb_lines && c + 3 < p4->nb_col && p4->array[l + 1][c + 1] \
			== sym && p4->array[l + 2][c + 2] == sym && \
			p4->array[l + 3][c + 3] == 0)
		return (c + 3);
	if (l + 3 < p4->nb_lines && c > 3 && p4->array[l + 1][c - 1] == sym && \
			p4->array[l + 2][c - 2] == sym && p4->array[l + 3][c - 3] == 0)
		return (c - 3);
	return (-1);
}

static int				parse_win(t_puiss *p4, int sym)
{
	int		i;
	int		j;
	int		col;

	i = 0;
	while (i < p4->nb_lines)
	{
		j = 0;
		while (j < p4->nb_col)
		{
			if (p4->array[i][j] == sym)
			{
				if ((col = win(p4, i, j, sym)) != -1)
					return (play_ia(p4, col));
			}
			j++;
		}
		i++;
	}
	return (0);
}

int						i_a_turn(t_puiss *p4)
{
	int		c;

	if (parse_win(p4, NUM_IA) != 0)
		return (2);
	if (parse_win(p4, NUM_PL) != 0)
		return (2);
	c = p4->nb_col / 2;
	while (c >= 0)
	{
		if (p4->array[0][c] == 0)
			return (play_ia(p4, c));
		c--;
	}
	c = p4->nb_col / 2;
	while (c <= p4->nb_col)
	{
		if (p4->array[0][c] == 0)
			return (play_ia(p4, c));
		c++;
	}
	return (0);
}
