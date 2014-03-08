/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <jburet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:50:10 by jburet            #+#    #+#             */
/*   Updated: 2013/11/20 14:50:15 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	char	*dst;

	dst = (char *)str;
	if (dst)
	{
		while (len--)
			*dst++ = 0;
	}
}
