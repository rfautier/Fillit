/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compareallstruct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:45:35 by rfautier          #+#    #+#             */
/*   Updated: 2017/12/07 13:25:02 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		compareallstruct(t_struct *s_tmpread)
{
	if (compareallstruct1(s_tmpread) || compareallstruct2(s_tmpread) ||
			compareallstruct3(s_tmpread) || compareallstruct4(s_tmpread))
		return (1);
	return (0);
}

int		compareallstruct1(t_struct *s_tmpread)
{
	static t_struct bhori[4] = {{0, 0}, {0, 1}, {0, 2}, {0, 3}};
	static t_struct bverti[4] = {{0, 0}, {1, 0}, {2, 0}, {3, 0}};
	static t_struct carre[4] = {{0, 0}, {1, 0}, {0, 1}, {1, 1}};
	static t_struct sgg[4] = {{0, 0}, {1, 0}, {1, 1}, {2, 1}};
	static t_struct sdd[4] = {{0, 0}, {1, 0}, {-1, 1}, {0, 1}};

	if (comparestruct(s_tmpread, bhori) || comparestruct(s_tmpread, bverti) ||
			comparestruct(s_tmpread, carre) || comparestruct(s_tmpread, sgg) ||
			comparestruct(s_tmpread, sdd))
		return (1);
	return (0);
}

int		compareallstruct2(t_struct *s_tmpread)
{
	static t_struct sgh[4] = {{0, 0}, {-1, 1}, {0, 1}, {-1, 2}};
	static t_struct sdh[4] = {{0, 0}, {0, 1}, {1, 1}, {1, 2}};
	static t_struct th[4] = {{0, 0}, {-1, 1}, {0, 1}, {1, 1}};
	static t_struct tb[4] = {{0, 0}, {1, 0}, {2, 0}, {1, 1}};
	static t_struct tg[4] = {{0, 0}, {-1, 1}, {0, 1}, {0, 2}};

	if (comparestruct(s_tmpread, sgh) || comparestruct(s_tmpread, sdh) ||
			comparestruct(s_tmpread, th) || comparestruct(s_tmpread, tb) ||
			comparestruct(s_tmpread, tg))
		return (1);
	return (0);
}

int		compareallstruct3(t_struct *s_tmpread)
{
	static t_struct td[4] = {{0, 0}, {0, 1}, {1, 1}, {0, 2}};
	static t_struct ldd[4] = {{0, 0}, {0, 1}, {0, 2}, {1, 2}};
	static t_struct ldg[4] = {{0, 0}, {1, 0}, {1, 1}, {1, 2}};
	static t_struct ldb[4] = {{0, 0}, {1, 0}, {2, 0}, {0, 1}};
	static t_struct ldh[4] = {{0, 0}, {-2, 1}, {-1, 1}, {0, 1}};

	if (comparestruct(s_tmpread, td) || comparestruct(s_tmpread, ldd) ||
			comparestruct(s_tmpread, ldg) || comparestruct(s_tmpread, ldb) ||
			comparestruct(s_tmpread, ldh))
		return (1);
	return (0);
}

int		compareallstruct4(t_struct *s_tmpread)
{
	static t_struct lgg[4] = {{0, 0}, {0, 1}, {-1, 2}, {0, 2}};
	static t_struct lgd[4] = {{0, 0}, {1, 0}, {0, 1}, {0, 2}};
	static t_struct lgb[4] = {{0, 0}, {1, 0}, {2, 0}, {2, 1}};
	static t_struct lgh[4] = {{0, 0}, {0, 1}, {1, 1}, {2, 1}};

	if (comparestruct(s_tmpread, lgg) || comparestruct(s_tmpread, lgd) ||
			comparestruct(s_tmpread, lgb) || comparestruct(s_tmpread, lgh))
		return (1);
	return (0);
}
