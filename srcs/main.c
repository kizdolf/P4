/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:36:15 by jburet            #+#    #+#             */
/*   Updated: 2014/03/08 07:19:20 by ebelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"
#include "../includes/errors.h"
#include "../includes/array.h"
#include "../includes/players.h"
#include "../includes/game.h"

int		main(int ac, char **av)
{
	t_puiss		*puiss;
	int			choice;
	int			num_play;
	int			winner;


	if (!check_entry(ac, av))
		return (1);
	puiss = new_puiss(av);
	puiss = init_puiss(puiss);
	num_play =  get_number_frst_player() % 2 + 1;
	while (1)
	{
		if (num_play != NUM_IA)
			choice = get_choice_player(puiss);
		if ((add_one_piece(puiss, choice, num_play)) != NULL)
			print_p4(puiss);
		num_play = (num_play == 1) ? 2 : 1;
		if ((winner = game_over(puiss)) != 0)
			return (end_game(winner, puiss));
	}
	return (0);
}
