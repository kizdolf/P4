/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:46:22 by jburet            #+#    #+#             */
/*   Updated: 2014/03/08 05:39:17 by ebelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H
# include "main.h"
# define ERROR_AC 42
# define ERROR_TYPE_COL 43
# define ERROR_TYPE_LIN 44


int			check_entry(int ac, char **av);
int			error_entry(int, int);

#endif
