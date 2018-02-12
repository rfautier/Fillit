/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparestruct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:49:40 by rfautier          #+#    #+#             */
/*   Updated: 2017/12/07 13:25:07 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		comparestruct(t_struct *s_origi, t_struct *s_cmp)
{
	if (s_origi[0].x == s_cmp[0].x && s_origi[0].y == s_cmp[0].y &&
			s_origi[1].x == s_cmp[1].x && s_origi[1].y == s_cmp[1].y &&
			s_origi[2].x == s_cmp[2].x && s_origi[2].y == s_cmp[2].y &&
			s_origi[3].x == s_cmp[3].x && s_origi[3].y == s_cmp[3].y)
		return (1);
	return (0);
}
