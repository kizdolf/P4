/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:51:41 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 13:45:36 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/errors.h"
#include "../libft/libft.h"

int			error_entry(int type_error, int flag)
{
	ft_putstr("\033[35m");
	if (flag == 0)
	{
		if (type_error == ERROR_AC)
			ft_putendl(AC);
		else if (type_error == ERROR_TYPE_COL)
			ft_putendl("Error in the type of columns.");
		else if (type_error == ERROR_TYPE_LIN)
			ft_putendl("Error in the type of lines.");
		else if (type_error == ERROR_SIZE)
			ft_putendl(SIZE1);
	}
	else
		ft_putendl(SIZE2);
	ft_putstr("\033[0m");
	return (0);
}
