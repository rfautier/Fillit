/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 12:08:19 by rfautier          #+#    #+#             */
/*   Updated: 2017/12/07 13:23:03 by rfautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				main(int argc, char **argv)
{
	int				fd;
	int				i;
	char			buf[567];
	t_struct		**tab;
	t_data			data;

	i = -1;
	if (argc != 2)
	{
		ft_putstr("usage: programme source_file\n");
		return (1);
	}
	if ((fd = open(argv[1], O_RDONLY)) < 1)
		return (1);
	fd = read(fd, buf, 567);
	tab = malloc(sizeof(t_struct) * (fd / 21) + 1);
	while (i++ < (fd / 21) + 1)
		tab[i] = malloc(sizeof(t_struct) * 4);
	if (buildtab(buf, fd, tab))
	{
		ft_putstr("error\n");
		return (1);
	}
	data.nbrtetriminos = (fd / 21) + 1;
	allposibilitie(tab, data);
}
