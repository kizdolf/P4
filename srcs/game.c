/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 02:29:48 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 21:14:18 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/game.h"
#include "../libft/libft.h"
#include "../includes/ctrl.h"
#include "../includes/array.h"

int				game_over(t_puiss *p4)
{
	int		winner;

	if ((winner = array_is_full(p4)) == -1)
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

static void		print_reason_even(int reason)
{
	if (reason == -1)
		ft_putendl("The game is full. Nobody win, everyboy loose.");
	if (reason == -2)
		ft_putendl("No coins left. Sorry.");
}



int				end_game(int winner, t_puiss *p4)
{
	print_p4(p4);
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
