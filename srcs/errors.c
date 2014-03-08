/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:51:41 by jburet            #+#    #+#             */
/*   Updated: 2014/03/08 07:53:44 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/errors.h"
#include "../libft/libft.h"

int			error_entry(int type_error, int flag)
{
	if (flag == 0)
	{
		if (type_error == ERROR_AC)
			ft_putendl("Error entry.");
		else if (type_error == ERROR_TYPE_COL)
			ft_putendl("Error type of colomn.");
		else if (type_error == ERROR_TYPE_LIN)
			ft_putendl("Error type of lines.");
	}
	else
	{
		if (flag == 1)
			ft_putendl("Error : wrong type of lines");
		else if (flag == 2)
			ft_putendl("Error : wrong type of columns");
	}
	return (0);
}
