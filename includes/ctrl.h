/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctrl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 03:05:45 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 12:06:25 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CTRL_H
# define CTRL_H
#include "main.h"
/*
 * ctrl_array.c
 */
int			ctrl_horizontal(t_puiss *p4);
int			ctrl_vertical(t_puiss *p4);
int			ctrl_diagonal(t_puiss *p4);
int			player_no_coins(t_puiss *p4);
int			array_is_full(t_puiss *p4);

/*
 * lib_ctrl.c
 */
int		horizontal_win(int i, int j, int **tab);
int		vertical_win(int i, int j, int **tab);
int		diagonal_win(int i, int j, t_puiss *p4);
#endif /*CTRL_H*/
