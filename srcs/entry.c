/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:42:09 by jburet            #+#    #+#             */
/*   Updated: 2014/03/08 03:35:03 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/errors.h"
#include "../libft/libft.h"

int			check_entry(int ac, char **av)
{
	int		nb_col;
	int		nb_lines;

	if (ac != 3)
		return (error_entry(ERROR_AC));
	if ((nb_col = ft_atoi(av[1])) == 0)
		return (error_entry(ERROR_TYPE_COL));
	if ((nb_lines = ft_atoi(av[2])) == 0)
		return (error_entry(ERROR_TYPE_LIN));
	return (1);
}
