/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 13:09:02 by rfautier          #+#    #+#             */
/*   Updated: 2017/12/01 16:39:48 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		readfile(t_position s_position, char *buf, t_struct *s_tmpread)
{
	int ibeg;
	int o;
	int i;

	o = 1;
	i = s_position.begin - 1;
	while (i++ != s_position.end)
	{
		if (buf[i] == '#')
		{
			s_tmpread[0].x = 0;
			s_tmpread[0].y = 0;
			ibeg = i;
			break ;
		}
	}
	if (bhori(buf, ++i, s_tmpread))
		return ;
	while (i != s_position.end)
	{
		if (buf[i] == '#')
			filltmptab(s_tmpread, o++, i, ibeg);
		i++;
	}
}

void		filltmptab(t_struct *s_tmpread, int o, int i, int ibeg)
{
	s_tmpread[o].x = (i - ibeg) % 5;
	if (s_tmpread[o].x == 4)
		s_tmpread[o].x = -1;
	s_tmpread[o].y = (i - ibeg + 2) / 5;
	if (s_tmpread[o].x == 3 && s_tmpread[o].y != 0)
		s_tmpread[o].x = -2;
}

int			bhori(char *buf, int i, t_struct *s_tmpread)
{
	if (buf[i + 1] == '#')
	{
		if (buf[i + 2] == '#')
		{
			s_tmpread[1].x = 1;
			s_tmpread[1].y = 0;
			s_tmpread[2].x = 2;
			s_tmpread[2].y = 0;
			s_tmpread[3].x = 3;
			s_tmpread[3].y = 0;
			return (1);
		}
	}
	return (0);
}
