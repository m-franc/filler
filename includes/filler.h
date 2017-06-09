/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 12:26:21 by mfranc            #+#    #+#             */
/*   Updated: 2017/06/09 16:53:12 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H

# define FILLER_H

#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"

typedef struct	s_gamedata
{
	int			plate_dim[2];
	int			last_pieceopp_coordstart[2];
	int			last_pieceopp_coordend[2];
	int			gap_between_pieces[2];
	int			opp_score;
	int			piece_dim[2];
}				t_gamedata;

#endif
