/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 02:29:48 by jburet            #+#    #+#             */
/*   Updated: 2014/03/08 02:58:02 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"
#include "../libft/libft.h"

int			game_over(t_puiss *p4)
{
	int		winner;

	if ((winner = array_is_full(p4)))
		return (-1);
	if ((winner = player_no_coins(p4)))
		return (-2);
	if ((winner = ctrl_horizontal(p4)) != 0)
		return (winner);
	if ((winner = ctrl_vertical(p4)) != 0)
		return (winner);
	if ((winner = ctrl_diagonal(p4)) != 0)
		return (winner);
	return (0);
}
/*
 * TO DO BETTER : Mettre des couleurs selon les gagnants perdant.
 * reagarder dans les couleurs du shell (exemple dans le Makefile)
 * c'est des truc genre [033m . Des balises en tout cas.
 */
static void		print_reason_even(int reason)
{
	if (reason == -1)
		ft_putendl("The game is full. Nobody win, everyboy loose.");
	if (reason == -2)
		ft_putendl("No coins left. Sorry.");
}



int			end_game(int winner, t_puiss *p4)
{
	if (winner < 0)
		print_reason_even(winner);
	else
	{
		if (winner == NUM_IA)
		{
			ft_putendl("I_A has blown you up. try again.");
		}
		else
		{
			ft_putendl("Yoooooooouu WIIIIIIIN. Congratulations!");
			ft_putendl("\t(you also loose the game)\t");
		}
	}
	return (0);
}
