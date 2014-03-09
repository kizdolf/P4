/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_a_ctrl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 15:57:25 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 20:47:58 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/i_a.h"

int		i_a_ctrl_hor_vert(t_puiss *p4, t_crd c, int sym, int nb)
{
	int			i;
	int			ret;
	int			j;
	int			nope;

	nope = 1;
	ret = 0;
	if (c.l + nb < p4->nb_lines)
	{
		i = c.l + nb;
		j = c.l;
		while (j < i)
		{
			if (p4->array[j][c.c] != sym)
			{
				nope = 0;
				if (j + 1 < i && p4->array[j + 1][c.c] == sym)
					nope = 1;
			}
			j++;
		}
		if (c.l > 0 && p4->array[c.l - 1][c.c] != 0)
			nope = 0;
	}
	else
		nope = 0;
	printf("bef end i_a_ctrl_hor_vert : nope = %d.\n", nope);
	ret += (nope == 1) ? W_VERT : 0;
	if (c.c + nb < p4->nb_col)
	{
		nope = 1;
		i = c.c + nb;
		j = c.c;
		while (j < i)
		{
			if (p4->array[j][c.c] != sym)
			{
				if (j + 1 < i && p4->array[c.l][j + 1] != sym)
					nope = 0;
			}
			j++;
		}
			nope = (p4->array[c.l][j++] != sym) ? 0 : 1;
	}
	printf("bef end i_a_ctrl_hor_vert : nope = %d ret = %d.\n", nope, ret);
	ret += (nope == 1) ? W_HOR : 0;
	return (ret);
}

int		style_simple(int style)
{
	if (style == W_HOR || style == W_VERT || style == W_DIAG_L || \
			style == W_DIAG_R)
		return (1);
	return (0);
}

int		play_ia(t_puiss *p4, int col)
{
	int		i;

	i = p4->nb_lines - 1;
	printf("IN play_ia. i = %d, col = %d\n", i, col);
	while (i > 0 && p4->array[i][col] != 0)
	{
		printf("PLAY: i == %d. col = %d.\n", i, col);
		i--;
	}
	if (p4->array[i][col] == 0)
	{
		p4->array[i][col] = NUM_IA;
		return (2);
	}
	return (0);
}