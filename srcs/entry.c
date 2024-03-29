/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:42:09 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 04:31:16 by ebelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/errors.h"
#include "../libft/libft.h"

int			check_entry(int ac, char **av)
{
	int		nb_col;
	int		nb_lines;

	if (ac != 3)
		return (error_entry(ERROR_AC, 0));
	if ((nb_col = ft_atoi(av[1])) == 0)
		return (error_entry(ERROR_TYPE_COL, 0));
	if ((nb_lines = ft_atoi(av[2])) == 0)
		return (error_entry(ERROR_TYPE_LIN, 0));
	if (nb_lines > MAX_LINE || nb_col > MAX_COL)
		return (error_entry(ERROR_SIZE, 0));
	return (1);
}
