/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctrl_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 03:05:08 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 06:44:40 by ebelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ctrl.h"
#include "../includes/main.h"

int			ctrl_vertical(t_puiss *p4)
{
	int		i;
	int		j;

	i = 0;
	while (i + 3 < p4->nb_col)
	{
		j = 0;
		while (j < p4->nb_lines)
		{
			if (p4->array[i][j] != 0)
			{
				if (vertical_win(i, j,  p4->array) == 1)
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int			ctrl_horizontal(t_puiss *p4)
{
	int		i;
	int		j;

	i = 0;
	while (i + 3 < p4->nb_col)
	{
		j = 0;
		while (j < p4->nb_lines)
		{
			if (p4->array[i][j] != 0)
			{
				if (horizontal_win(i, j, p4->array) == 1)
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int			ctrl_diagonal(t_puiss *p4)
{
	p4++;
	return (0);
}

int			array_is_full(t_puiss *p4)
{
	int		i;
	int		j;

	i = 0;
	while (i <= p4->nb_col)
	{
		j = 0;
		while (j <= p4->nb_lines)
		{
			if (p4->array[i][j] != 0)
				return (0);
			j++;
		}
		i++;
	}
	return (-1);
}

int			player_no_coins(t_puiss *p4)
{
	p4++;
	return (0);
}
