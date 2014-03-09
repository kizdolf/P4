/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_a.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/08 01:13:24 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 15:33:34 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_A_H
# define I_A_H
# include "main.h"
# define W_HOR		1
# define W_VERT		2
# define W_DIAG_L	3
# define W_DIAG_R	4

typedef struct			s_crd
{
	int		l;
	int		c;
}						t_crd;
/*
 * i_a_algo.c
 */
int			i_a_puiss(t_puiss *p4);
void		i_a_try_win(t_puiss *p4);
int			nb_are_align(int **tab, t_crd c, int sym, int nb);
void		play_to_win(t_puiss *p4, t_crd c, int style);

#endif /*I_A_H*/
