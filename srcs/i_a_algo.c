/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_a_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 01:12:46 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 17:39:58 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/i_a.h"
#include "../includes/main.h"

int			nb_are_align(t_puiss *p4, t_crd c, int sym, int nb)
{
	int			i;
	int			ret;
	int			nope;
	t_crd		tmp;

	printf("in nb_are_align. c.l = %d, c.c = %d\n", c.l, c.c);
	ret = i_a_ctrl_hor_vert(p4, c, sym, nb);
	tmp = c;
	nope = 1;
	if (c.c + nb < p4->nb_col && c.l + nb < p4->nb_lines)
	{
		i = 0;
		while (i++ < nb && nope == 1)
			nope = (p4->array[c.l++][c.c++] != sym) ? 0 : 1;
	}
	else
		nope = 0;
	ret += (nope == 1) ? W_DIAG_R : 0;
	c = tmp;
	if (c.c - nb > 1 && c.l - nb > 1)
	{
		nope = 1;
		i = 0;
		while (i++ < nb && nope == 1)
			nope = (p4->array[c.l--][c.c--] != sym) ? 0 : 1;
	}
	ret += (nope == 1) ? W_DIAG_L : 0;
	printf("nb_are_align return %d.\n", ret);
	return (ret);
}

int		play_to_win(t_puiss *p4, t_crd c, int style)
{
	
	printf("in play_to_win : style = %d.\n", style);
	if (style_simple(style))
	{
		if (style == W_HOR)
			play_ia(p4, c.c + 3);
		else if (style == W_VERT)
			play_ia(p4, c.c);
		else if (style == W_DIAG_R)
			play_ia(p4, c.c + 3);
		else if (style == W_DIAG_L)
			play_ia(p4, c.c - 3);
		return (1);
	}
	else
	{
		if (style == 3 || style == 5 || style == 7 || style == 9 || style ==\
				11 || style == 13 || style == 15)
			play_ia(p4, c.c + 3);
		else if (style == 6 || style == 10 || style == 14)
			play_ia(p4, c.c);
		else 
			play_ia(p4, c.c + 3);
		return (1);
	}
	return (0);
}

int			i_a_try_win(t_puiss *p4)
{
	int		style;
	t_crd	c;

	printf("i_a_try_win en cours.\n");
	c.l = 0;
	while (c.l < p4->nb_lines)
	{
		c.c = 0;
		while (c.c < p4->nb_col)
		{
			if (p4->array[c.l][c.c] == NUM_IA)
			{
				if ((style = nb_are_align(p4, c, NUM_IA, 2)) != 0)
					return (play_to_win(p4, c, style));
			}
			if (p4->array[c.l][c.c] == NUM_PL)
			{
				if ((style = nb_are_align(p4, c, NUM_PL, 2)) != 0)
				return (play_to_win(p4, c, style));
			}
			c.c++;
		}
		c.l++;
	}
	printf("i_a_try_win fail. return 0.\n");
	return (0);
}

int			i_a_puiss(t_puiss *p4)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (i_a_try_win(p4) == 1)
		return (2);
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
