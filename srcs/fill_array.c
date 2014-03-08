/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 23:12:21 by jburet            #+#    #+#             */
/*   Updated: 2014/03/08 01:39:46 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/array.h"
#include "../libft/libft.h"
#include "../includes/main.h"
#include "../includes/i_a.h"

t_puiss		*add_one_piece(t_puiss *p4, int nb_col, int num_player)
{
	int		line;

	if (num_player == NUM_IA)
		return (i_a_puiss(p4));
	line = p4->nb_lines - 1;
	while (line >= 0 && p4->array[line][nb_col] && p4->array[line][nb_col] != 0)
		line--;
	if (line < 0)
	{
		ft_putendl("choice impossible.");
		return (NULL);
	}
	p4->array[line][nb_col] = num_player;
	return (p4);
}

int			get_choice_player(t_puiss *p4)
{
	int		choice;
	char	*gnl;

	choice = -1;
	while (choice < 0 || choice > p4->nb_col)
	{
		ft_putendl("please enter the column number you wish yo play in :");
		get_next_line(0, &gnl);
		if ((choice = ft_atoi(gnl)) <= 0)
			choice = -1;
	}
	return (choice - 1);
}
