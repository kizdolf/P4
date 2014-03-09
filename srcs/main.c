/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:36:15 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 11:24:33 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"
#include "../includes/errors.h"
#include "../includes/array.h"
#include "../includes/players.h"
#include "../includes/game.h"

int			play(t_puiss *p4, int num_play)
{
	int		choice;

	choice = 0;
	if (num_play != NUM_IA)
		choice = get_choice_player(p4);
	if (add_one_piece(p4, choice, num_play) != NULL)
		print_p4(p4);
	return ((num_play == 1) ? 2 : 1);
}

int		main(int ac, char **av)
{
	t_puiss		*puiss;
	int			num_play;
	int			winner;

	if (!check_entry(ac, av))
		return (1);
	if (!(puiss = new_puiss(av)))
			return (1);
	puiss = init_puiss(puiss);
	num_play =  get_number_frst_player() % 2 + 1;
	while (1)
	{
		num_play = play(puiss, num_play);
		printf("num_play = %d\n", num_play);
		if ((winner = game_over(puiss)) != 0)
			return (end_game(winner));
	}
	return (0);
}
