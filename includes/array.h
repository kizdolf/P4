/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 22:20:57 by jburet            #+#    #+#             */
/*   Updated: 2014/03/07 23:23:38 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H
#include "main.h"

/*
 * array.c
 */
t_puiss		*new_puiss(char **av);
void		print_p4(t_puiss *p4);
t_puiss		*init_puiss(t_puiss *p4);

/*
 * fill_array.c
 */
t_puiss		*add_one_piece(t_puiss *p4, int nb_col, int num_player);
int			get_choice_player(t_puiss *p4);

#endif /*ARRAY_H*/
