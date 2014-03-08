/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_a_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 01:12:46 by jburet            #+#    #+#             */
/*   Updated: 2014/03/08 01:54:27 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/i_a.h"
#include "../includes/main.h"

t_puiss		*i_a_puiss(t_puiss *p4)
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
				return (p4);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
