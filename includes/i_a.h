/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_a.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 01:13:24 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 18:23:22 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_A_H
# define I_A_H
# include "main.h"
# define W_HOR		1
# define W_VERT		2
# define W_DIAG_L	4
# define W_DIAG_R	8
/*
 * explications defines:
 * si nb_are_align return != 0 :
 * 1 => horizontal.
 * 2 => vertical
 * 3 => horizontal et vertical
 * 4 => diagonale gauche
 * 5 => diag. gauche et horizontal
 * 6 => diag. gauche et vertical.
 * 7 => diag. gauche et horizontal et vertical
 * 8 => diag droite. 
 * 9 => diag droite et hori.
 * 10 => diag droite et vert.
 * 11 => diag droite et vert et hori
 * 12 => diag droite et diag gauche
 * 13 => diagS et horizontal
 * 14 => diagS et vertical
 * 15 => diags et horizontal et vertical
 */

typedef struct			s_crd
{
	int		l;
	int		c;
}						t_crd;
/*
 * i_a_algo.c
 */
int			i_a_puiss(t_puiss *p4);
int			i_a_try_win(t_puiss *p4);
int			nb_are_align(t_puiss *p4, t_crd c, int sym, int nb);
int			play_to_win(t_puiss *p4, t_crd c, int style);

/*
 * i_a_ctrl.c
 */
int			i_a_ctrl_hor_vert(t_puiss *p4, t_crd c, int sym, int nb);
int			style_simple(int style);
int			play_ia(t_puiss *p4, int col);

#endif /*I_A_H*/
