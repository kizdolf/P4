/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:51:41 by jburet            #+#    #+#             */
/*   Updated: 2014/03/09 04:35:02 by ebelhadj         ###   ########.fr       */
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
		{
			ft_putendl("Error : wrong number of arguments.");
			ft_putendl("Hint : need two arguments.");
		}
		else if (type_error == ERROR_TYPE_COL)
			ft_putendl("Error in the type of columns.");
		else if (type_error == ERROR_TYPE_LIN)
			ft_putendl("Error in the type of lines.");
		else if (type_error == ERROR_SIZE)
		{
			ft_putendl("Error : the map you are trying to load is too big.");
			ft_putendl("Hint : 20 is the largest size of line/columns the program alow you to enter.");
		}
	}
	else
	{
		ft_putendl("Error : the map you are trying to load is too small.");
		ft_putendl("Hint : 6 is the smallest size of lines/columns the program alow you to enter.");
	}
	ft_putstr("\033[0m");
	return (0);
}
