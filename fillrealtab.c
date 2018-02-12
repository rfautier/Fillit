/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillrealtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 15:05:08 by rfautier          #+#    #+#             */
/*   Updated: 2017/12/01 15:39:14 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	fillrealtab(t_struct *s_tmpread, t_struct *tab)
{
	tab[0].x = s_tmpread[0].x;
	tab[0].y = s_tmpread[0].y;
	tab[1].x = s_tmpread[1].x;
	tab[1].y = s_tmpread[1].y;
	tab[2].x = s_tmpread[2].x;
	tab[2].y = s_tmpread[2].y;
	tab[3].x = s_tmpread[3].x;
	tab[3].y = s_tmpread[3].y;
}
