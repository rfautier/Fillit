/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allpossibilitie.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:07:38 by rfautier          #+#    #+#             */
/*   Updated: 2017/12/11 13:29:25 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	allposibilitie(t_struct **tab, t_data data)
{
	char	**endtab;
	int		i;
	int		coord;

	data.taille = 2;
	i = -1;
	endtab = malloc(sizeof(char *) * data.taille);
	while (i++ < data.taille)
		endtab[i] = malloc(sizeof(char) * data.taille);
	data.nb = 0;
	coord = 0;
	cleartab(endtab, data);
	while (backtrack(endtab, tab, coord, data))
	{
		data.taille++;
		i = 0;
		endtab = malloc(sizeof(char *) * data.taille);
		while (i < data.taille)
		{
			endtab[i] = malloc(sizeof(char) * data.taille);
			i++;
		}
		cleartab(endtab, data);
	}
	printtab(endtab, data);
}

void	printtab(char **endtab, t_data data)
{
	int j;
	int i;

	i = 0;
	j = 0;
	while (i < data.taille)
	{
		while (j < data.taille)
		{
			ft_putchar(endtab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
}

void	cleartab(char **endtab, t_data data)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < data.taille)
	{
		while (j < data.taille)
		{
			endtab[i][j] = '.';
			j++;
		}
		i++;
		j = 0;
	}
}
