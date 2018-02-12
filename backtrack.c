/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 16:52:45 by rfautier          #+#    #+#             */
/*   Updated: 2017/12/07 13:26:19 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		backtrack(char **endtab, t_struct **tab, int coord, t_data data)
{
	if (data.nb == data.nbrtetriminos)
		return (0);
	while ((coord / data.taille) != data.taille &&
			(coord % data.taille) != data.taille)
	{
		if (!detectetab(endtab, tab, data, coord))
		{
			data.nb = data.nb + 1;
			if (!backtrack(endtab, tab, 0, data))
				return (0);
			else
			{
				data.nb = data.nb - 1;
				clearlastnb(endtab, tab, data, coord);
			}
		}
		coord++;
	}
	return (1);
}

void	clearlastnb(char **endtab, t_struct **tab, t_data data, int coord)
{
	int		i;
	int		j;
	int		nb;

	nb = data.nb;
	j = (coord % data.taille);
	i = (coord / data.taille);
	endtab[i][j] = '.';
	endtab[i + tab[nb][1].y][j + tab[nb][1].x] = '.';
	endtab[i + tab[nb][2].y][j + tab[nb][2].x] = '.';
	endtab[i + tab[nb][3].y][j + tab[nb][3].x] = '.';
}

int		detectetab(char **endtab, t_struct **tab, t_data data, int coord)
{
	int		i;
	int		j;
	int		nb;

	nb = data.nb;
	j = (coord % RE);
	i = (coord / RE);
	if (endtab[i][j] == '.')
	{
		if ((i + tab[nb][1].y) >= 0 && (j + tab[nb][1].x) >= 0 &&
				(i + tab[nb][1].y) < RE && (j + tab[nb][1].x) < RE &&
				endtab[i + tab[nb][1].y][j + tab[nb][1].x] == '.')
			if ((i + tab[nb][2].y) >= 0 && (j + tab[nb][2].x) >= 0 &&
					(i + tab[nb][2].y) < RE && (j + tab[nb][2].x) < RE &&
					endtab[i + tab[nb][2].y][j + tab[nb][2].x] == '.')
				if ((i + tab[nb][3].y) >= 0 && (j + tab[nb][3].x) >= 0 &&
						(i + tab[nb][3].y) < RE && (j + tab[nb][3].x) < RE &&
						endtab[i + tab[nb][3].y][j + tab[nb][3].x] == '.')
				{
					filltab(endtab, tab, data, coord);
					return (0);
				}
	}
	return (1);
}

void	filltab(char **endtab, t_struct **tab, t_data data, int coord)
{
	char	a;
	int		i;
	int		j;
	int		nb;

	nb = data.nb;
	j = (coord % data.taille);
	i = (coord / data.taille);
	a = 'A';
	endtab[i][j] = a + nb;
	endtab[i + tab[nb][1].y][j + tab[nb][1].x] = a + nb;
	endtab[i + tab[nb][2].y][j + tab[nb][2].x] = a + nb;
	endtab[i + tab[nb][3].y][j + tab[nb][3].x] = a + nb;
}
