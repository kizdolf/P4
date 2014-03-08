/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/07 22:20:05 by jburet            #+#    #+#             */
/*   Updated: 2014/03/08 07:54:43 by jburet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/array.h"
#include "../includes/main.h"
#include "../libft/libft.h"
#include "../includes/errors.h"

t_puiss		*new_puiss(char **av)
{
	t_puiss		*p4;
	int			i;

	p4 = (t_puiss *)ft_memalloc(sizeof(t_puiss));
	if ((p4->nb_col = ft_atoi(av[1])) < 7)
	{
		if (error_entry(p4->nb_col, 1) == 0)
			return (NULL);
	}
	if ((p4->nb_lines = ft_atoi(av[2])) < 6)
	{
		if (error_entry(p4->nb_lines, 2) == 0)
		return (NULL);
	}
	p4->array = (int **)ft_memalloc(sizeof(int *) * (p4->nb_lines + 1));
	i = 0;
	while (i < p4->nb_lines)
		p4->array[i++] = (int *)ft_memalloc(sizeof(int) * (p4->nb_col + 1));
	return (p4);
}

t_puiss		*init_puiss(t_puiss *p4)
{
	int			i;
	int			j;

	i = 0;
	p4->coins_ia = NB_COINS;
	p4->coins_play = NB_COINS;
	while (p4->array[i])
	{
		j = 0;
		while (p4->array[i][j])
			p4->array[i][j++] = 0;
		i++;
	}
	return (p4);
}

static void	print_one_case(int line, int col, t_puiss *p4)
{
	ft_putstr("| ");
	if (p4->array[line][col] == 0)
		ft_putchar(' ');
	else if (p4->array[line][col] == 1)
		ft_putchar('X');
	else if (p4->array[line][col] == 2)
		ft_putchar('0');
	else
		ft_putstr(ft_itoa(p4->array[line][col]));
	ft_putchar(' ');
}

static void	print_first_line(t_puiss *p4)
{
	int		i;

	i = 0;
	ft_putchar(' ');
	while (i < p4->nb_col)
	{
		if (i + 1 < 10)
			ft_putstr("| ");
		else
			ft_putchar('|');
		ft_putnbr(i + 1);
		if (i + 1 < 100)
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	i = 0;
	ft_putchar(' ');
	while (i++ < (p4->nb_col * 4))
		ft_putchar('-');
	ft_putchar('\n');
}

void		print_p4(t_puiss *p4)
{
	int		line;
	int		col;

	line = 0;
	print_first_line(p4);
	while (line < p4->nb_lines)
	{
		ft_putchar(' ');
		col = 0;
		while (col < p4->nb_col)
			print_one_case(line, col++, p4);
		line++;
		ft_putchar('|');
		ft_putstr("\n");
		col = 0;
		ft_putchar(' ');
		while (col++ < (p4->nb_col * 4))
			ft_putchar('-');
		ft_putchar('\n');
	}
}
