/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:42:09 by jburet            #+#    #+#             */
/*   Updated: 2014/03/07 23:43:09 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/errors.h"
#include "../libft/libft.h"

int			check_entry(int ac, char **av)
{
	int		nb_col;
	int		nb_lines;

	printf("DEBUG check_entry : ac = %d\n", ac);
	if (ac != 3)
		return (error_entry());
	if ((nb_col = ft_atoi(av[1])) == 0)
		return (error_entry());
	if ((nb_lines = ft_atoi(av[2])) == 0)
		return (error_entry());
	printf("nb_col = %d, nb_lines = %d\n", nb_col, nb_lines);
	return (1);
}
