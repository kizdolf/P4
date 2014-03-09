/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:46:22 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 15:23:32 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H
# include "main.h"
# define ERROR_AC 42
# define ERROR_TYPE_COL 43
# define ERROR_TYPE_LIN 44
# define MAX_LINE 50
# define MAX_COL 50
# define ERROR_SIZE 10
# define AC "Error : wrong number of arguments. \nHint : need two arguments."
# define SIZE1 "Error : the map you are trying to load is too big.\nHint :\
	20 is the largest size of line/columns the program accept"
# define SIZE2 "Error : the map you are trying to load is too small.\n \
	Hint : 6 is the smallest size of lines/columns the program accept"

int			check_entry(int ac, char **av);
int			error_entry(int type_error, int flag);

#endif
