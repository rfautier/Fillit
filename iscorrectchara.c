/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isonecorrect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 15:26:50 by rfautier          #+#    #+#             */
/*   Updated: 2017/12/04 15:11:53 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			iscorrectchara(int begin, int end, char *buf)
{
	int i;
	int o;
	int nbr;

	nbr = 0;
	o = 0;
	i = begin;
	while (i < end + 1)
	{
		if (buf[i] != '.' && buf[i] != '#' && buf[i] != '\n')
			return (1);
		if (buf[i] == '\n' && (buf[i - 1] == '\n' || buf[i - 2] == '\n' ||
					buf[i - 3] == '\n'))
			return (1);
		if (buf[i] == '#')
			o++;
		if (buf[i] == '.')
			nbr++;
		i++;
	}
	if (buf[i] == '#')
		o++;
	if (o != 4 || nbr != 12)
		return (1);
	return (0);
}
