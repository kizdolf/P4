/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   players.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 23:48:21 by jburet            #+#    #+#             */
/*   Updated: 2014/03/08 01:00:32 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/players.h"
#include <stdlib.h>
#include <main.h>
#include <time.h>

int			get_number_frst_player(void)
{
	unsigned		date;

	date = (unsigned)time(NULL);
	srand(date);
	printf("srand(time()) = %d\n", (int)date);
	return ((int)date);
}
