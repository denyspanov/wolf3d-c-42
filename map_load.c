/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_load.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpanov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:10:20 by dpanov            #+#    #+#             */
/*   Updated: 2017/04/21 18:54:35 by dpanov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

int		f_to_data(t_data *data, int x, int y, char line)
{
	if (line == '0')
		data->map[x][y] = 0;
	else if (line == '1')
		data->map[x][y] = 1;
	else if (line == ' ')
		return (0);
	else
		file_read_errors(1);
	return (1);
}

void	f_read(t_data *data)
{
	int		fd;
	char	line[2];
	int		i;
	int		j[2];

	if ((fd = open("map", O_RDONLY)) < 1)
		file_read_errors(1);
	i = -1;
	j[0] = 0;
	j[1] = 0;
	while ((i = read(fd, line, 1)) > 0)
	{
		if (j[1] == 25)
		{
			j[1] = 0;
			j[0]++;
		}
		if (f_to_data(data, j[0], j[1], line[0]))
			j[1]++;
	}
	close(fd);
}
