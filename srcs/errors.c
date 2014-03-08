/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 21:51:41 by jburet            #+#    #+#             */
/*   Updated: 2014/03/08 03:48:21 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/errors.h"
#include "../libft/libft.h"


int			error_entry(int type_error)
{
	type_error++;
	ft_putendl("Error entry.");
	return (0);
}
