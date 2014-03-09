/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ctrl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 05:42:30 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 06:07:57 by ebelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ctrl.h"

int		vertical_win(int i, int j, int **tab)
{
	int		cmp;

	cmp = tab[i][j];
	printf("DEBUG HORIZ: cmp = %d.\n", cmp);
	if (tab[i + 1][j] == cmp && tab[i + 2][j] == cmp && tab[i + 3][j] == cmp)
		return (1);
	return (0);
}

int		horizontal_win(int i, int j, int **tab)
{
	int cmp;

	cmp = tab[i][j];
	if (tab[i][j + 1] == cmp && tab[i][j + 2] == cmp && tab[i][j + 3] == cmp)
		return (1);
	return (0);
}
