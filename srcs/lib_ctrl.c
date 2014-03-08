/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ctrl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 05:42:30 by jburet            #+#    #+#             */
/*   Updated: 2014/03/08 05:54:55 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ctrl.h"

int		horizontal_win(int i, int j, int **tab)
{
	int		cmp;

	cmp = tab[i][j];
	printf("DEBUG HORIZ: cmp = %d.\n", cmp);
	if (tab[i + 1][j] == cmp && tab[i + 2][j] == cmp && tab[i + 3][j] == cmp)
		return (1);
	return (0);
}
