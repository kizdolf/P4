/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 23:12:21 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 13:07:00 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/array.h"
#include "../libft/libft.h"
#include "../includes/main.h"
#include "../includes/i_a.h"
#include <stdlib.h>

int			add_one_piece(t_puiss *p4, int nb_col, int num_player)
{
	int		line;

	printf("DEBUG add_one_piece: num_player = %d, choice = %d\n", num_player, nb_col);
	if (num_player == NUM_IA)
		return (i_a_puiss(p4));
	line = p4->nb_lines - 1;
	while (line >= 0 && p4->array[line][nb_col] && p4->array[line][nb_col] != 0)
		line--;
	if (line < 0)
	{
		ft_putendl("Impossible choice");
		add_one_piece(p4, get_choice_player(p4), num_player);
		return (0);
	}
	p4->array[line][nb_col] = num_player;
	p4->coins_play--;
	return (1);
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
		if (ft_strstr(gnl, "exit") != NULL)
			exit (0);
		if ((choice = ft_atoi(gnl)) <= 0)
		{
			ft_putendl("Wrong type of command.");
			choice = -1;
		}
	}
	return (choice - 1);
}
