/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filit.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 12:32:45 by rfautier          #+#    #+#             */
/*   Updated: 2017/12/07 12:48:51 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include "libft.h"
# include <fcntl.h>
# define RE data.taille

typedef struct	s_struct
{
	int			x;
	int			y;
}				t_struct;

typedef struct	s_positione
{
	int			begin;
	int			end;
}				t_position;

typedef struct	s_data
{
	int			nb;
	int			taille;
	int			nbrtetriminos;
}				t_data;

int				compareallstruct1(t_struct *s_tmpread);
int				compareallstruct2(t_struct *s_tmpread);
int				compareallstruct3(t_struct *s_tmpread);
int				compareallstruct4(t_struct *s_tmpread);
int				compareallstruct(t_struct *s_tmpread);
int				buildtab(char *buf, int ret, t_struct **tab);
void			readfile(t_position s_position, char *buf,
		t_struct *s_tmpread);
int				iscorrectchara(int begin, int end, char *buf);
int				bhori(char *buf, int i, t_struct *s_tmpread);
int				comparestruct(t_struct *s_tmpread, t_struct *d_copie);
void			fillrealtab(t_struct *s_tmpread, t_struct *tab);
int				backtrack(char **endtab, t_struct **tab, int coord,
		t_data data);
void			printtab(char **tab, t_data data);
void			filltab(char **endtab, t_struct **tab, t_data data,
		int coord);
void			allposibilitie(t_struct **tab, t_data data);
void			filltmptab(t_struct *s_tmpread, int o, int i, int ibeg);
int				detectetab(char **endtab, t_struct **tab, t_data data,
		int coord);
void			cleartab(char **endtab, t_data data);
void			clearlastnb(char **endtab, t_struct **tab, t_data data,
		int coord);
#endif
