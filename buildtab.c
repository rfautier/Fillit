/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buildtab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 12:42:08 by rfautier          #+#    #+#             */
/*   Updated: 2017/12/01 16:46:21 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		buildtab(char *buf, int ret, t_struct **tab)
{
	int				i;
	t_position		s_position;
	t_struct		*s_tmpread;

	i = -1;
	s_position.begin = 0;
	s_position.end = 19;
	s_tmpread = malloc(sizeof(s_tmpread) * 4);
	while (i++ < 26)
	{
		if (iscorrectchara(s_position.begin, s_position.end, buf))
			return (1);
		readfile(s_position, buf, s_tmpread);
		if (compareallstruct(s_tmpread) == 0)
			return (1);
		fillrealtab(s_tmpread, tab[i]);
		if (s_position.end + 1 == ret)
			return (0);
		if (buf[s_position.end + 1] != '\n')
			return (1);
		s_position.begin = s_position.begin + 21;
		s_position.end = s_position.end + 21;
	}
	return (1);
}
