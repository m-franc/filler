/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 12:25:52 by mfranc            #+#    #+#             */
/*   Updated: 2017/06/08 18:41:05 by mfranc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		ft_exit_filler(void)
{
	ft_putendl("ERROR");
	exit(-1);
}

void	ft_state_buff(char *buff, int *pi)
{
	int		(*infos[3](char *, int *);
	char	index_state;

}

int		main(void)
{
	int		ret;
	int		i;
	char	buff[BUFF_SIZE];

	while ((ret = read(0, buff, BUFF_SIZE) != 0))
		buff[ret] = '\0';
	if (ret == -1)
		return (ft_exit_filler());
	i = -1;
	while (buff[++i])
		ft_state_buff(buff + i, &i);
	ft_printf("coucou\n");
	return (0);
}
