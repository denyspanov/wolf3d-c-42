/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpanov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 18:43:29 by dpanov            #+#    #+#             */
/*   Updated: 2017/04/21 18:50:29 by dpanov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf.h"

void	evvv_hook(int key, t_data *data)
{
	if (key == KEY_LEFT)
	{
		data->old_dir_x = data->dir_x;
		data->dir_x = data->dir_x * cos(data->rot_s) -
				data->dir_y * sin(data->rot_s);
		data->dir_y = data->old_dir_x * sin(data->rot_s) +
				data->dir_y * cos(data->rot_s);
		data->old_plane_x = data->plane_x;
		data->plane_x = data->plane_x * cos(data->rot_s) -
				data->plane_y * sin(data->rot_s);
		data->plane_y = data->old_plane_x * sin(data->rot_s) +
				data->plane_y * cos(data->rot_s);
	}
}

void	evv_hook(int key, t_data *data)
{
	if (key == KEY_RIGHT)
	{
		data->old_dir_x = data->dir_x;
		data->dir_x = data->dir_x * cos(-data->rot_s) -
				data->dir_y * sin(-data->rot_s);
		data->dir_y = data->old_dir_x * sin(-data->rot_s) +
				data->dir_y * cos(-data->rot_s);
		data->old_plane_x = data->plane_x;
		data->plane_x = data->plane_x * cos(-data->rot_s) -
						data->plane_y * sin(-data->rot_s);
		data->plane_y = data->old_plane_x * sin(-data->rot_s) +
						data->plane_y * cos(-data->rot_s);
	}
}

int		ev_hook(int key, t_data *data)
{
	if (key == KEY_ESCAPE)
		exit(0);
	if (key == KEY_UP)
	{
		if (!(data->map[(int)(data->pos_x + data->dir_x *
											data->mov_s)][(int)data->pos_y]))
			data->pos_x += data->dir_x * data->mov_s;
		if (!(data->map[(int)data->pos_x][(int)(data->pos_y +
				data->dir_y * data->mov_s)]))
			data->pos_y += data->dir_y * data->mov_s;
	}
	if (key == KEY_DOWN)
	{
		if (!(data->map[(int)(data->pos_x - data->dir_x *
								data->mov_s)][(int)data->pos_y]))
			data->pos_x -= data->dir_x * data->mov_s;
		if (!(data->map[(int)data->pos_x][(int)(data->pos_y -
				data->dir_y * data->mov_s)]))
			data->pos_y -= data->dir_y * data->mov_s;
	}
	return (0);
}

int		key_x(t_data *data)
{
	free(data);
	exit(0);
	return (0);
}
