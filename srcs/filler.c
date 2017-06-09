/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 12:25:52 by mfranc            #+#    #+#             */
/*   Updated: 2017/06/09 18:19:20 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		ft_exit_filler(void)
{
	ft_putendl("ERROR");
	exit(-1);
}

t_gamedata	ft_init_gamedata(void)
{
	t_gamedata	gamedata;

	gamedata.plate_dim[0] = 0;
	gamedata.plate_dim[1] = 0;
	gamedata.last_pieceopp_coordstart[0] = 0;
	gamedata.last_pieceopp_coordstart[1] = 0;
	gamedata.gap_between_pieces[0] = 0;
	gamedata.gap_between_pieces[1] = 0;
	gamedata.opp_score = 0;
	gamedata.piece_dim[0] = 0;
	gamedata.piece_dim[1] = 0;
	return (gamedata);
}

int		main(void)
{
//	int			ret;
	int			i;
	char		buff[BUFF_SIZE];
	t_gamedata	gamedata;
	
	gamedata = ft_init_gamedata();
//	if ((ret = read(0, buff, BUFF_SIZE) == -1))
//		ft_exit_filler();
//	buff[ret] = '\0';
	PSTR(buff)
//	if (ret == -1)
//		return (ft_exit_filler());
	i = -1;
/*	while (buff[++i])
	{
		if (ft_strequ(buff + i, "Plateau"))
			ft_init_game(buff + i, &i, &gamedata);
		else if (ft_strequ(buff + i, "\n0"))
			ft_update_point(buff + i, &i, &gamedata);
		else if (ft_strequ(buff + i, "Piece"))
			ft_get_piece(buff + i, &i, &gamedata);
	}*/
	return (0);
}
