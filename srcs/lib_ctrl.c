/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ctrl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 05:42:30 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 20:54:36 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ctrl.h"

int		vertical_win(int i, int j, int **tab)
{
	int		cmp;

	cmp = tab[i][j];
	if (tab[i + 1][j] == cmp && tab[i + 2][j] == cmp && tab[i + 3][j] == cmp)
		return (cmp);
	return (0);
}

int		horizontal_win(int i, int j, int **tab)
{
	int		cmp;

	cmp = tab[i][j];
	if (tab[i][j + 1] == cmp && tab[i][j + 2] == cmp && tab[i][j + 3] == cmp)
		return (cmp);
	return (0);
}

int		diagonal_win(int i, int j, t_puiss *p4)
{
	int		who;
	int 	k;
	int		l;

	l = i;
	k = j;
	who = p4->array[i][j];
	if (i + 3 < p4->nb_lines && j + 3 < p4->nb_col && \
			p4->array[i + 1][j + 1] == who && p4->array[i + 2][j + 2] == who \
			&& p4->array[i + 3][j + 3] == who)
		return (who);
	if (i < 3 || j < 3)
		return (0);
	i = l;
	j = k;
	if (i - 3 < p4->nb_col && j - 3 < p4->nb_lines && \
			p4->array[i - 1][j - 1] == who && p4->array[i - 2][j - 2] == who \
			&& p4->array[i - 3][j - 3] == who)
		return (who);
	return (0);
}
