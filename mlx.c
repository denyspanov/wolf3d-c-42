/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpanov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 18:53:49 by dpanov            #+#    #+#             */
/*   Updated: 2017/04/24 13:34:38 by dpanov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	mlx_set(t_data *data)
{
	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, data->win_w, data->win_h, "Wolf3D");
}

void	col_help(t_data *data, int sx)
{
	if (0 > sx)
	{
		data->r = 255;
		data->g = 50;
		data->b = 50;
	}
	else
	{
		data->r = 255;
		data->g = 50;
		data->b = 255;
	}
}

void	choose_color(t_data *data, int sx, int sy)
{
	if (data->side == 1)
	{
		if (0 > sy)
		{
			data->r = 50;
			data->g = 255;
			data->b = 50;
		}
		else
		{
			data->r = 100;
			data->g = 100;
			data->b = 255;
		}
	}
	else
		col_help(data, sx);
}
