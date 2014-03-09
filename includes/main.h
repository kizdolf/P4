/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 20:38:02 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 17:23:04 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include <stdio.h>
# define NUM_IA 2
# define NUM_PL 1
# define NB_COINS 21

/*
 * Struct de la grille
 */
typedef struct			s_puiss
{
	int		nb_col;
	int		nb_lines;
	int		**array;
	int		coins_ia;
	int		coins_play;
}						t_puiss;

#endif /*MAIN_H*/
