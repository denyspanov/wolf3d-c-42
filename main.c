#include "wolf.h"
#include <stdbool.h>
int worldMap[24][24]=
        {
                {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,0,0,0,0,0,2,2,2,2,2,0,0,0,0,3,0,3,0,3,0,0,0,1},
                {1,0,0,0,0,0,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,0,0,0,0,0,2,0,0,0,2,0,0,0,0,3,0,0,0,3,0,0,0,1},
                {1,0,0,0,0,0,2,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,0,0,0,0,0,2,2,0,2,2,0,0,0,0,3,0,3,0,3,0,0,0,1},
                {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,4,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,4,0,0,0,0,5,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,4,0,4,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,4,0,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,4,4,4,4,4,4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
                {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
        };

void    standart_data(t_data **data)
{
	(*data)->win_h = 720;
	(*data)->win_w = 1280;
	(*data)->pos_x = 22;
	(*data)->pos_y = 12;
	(*data)->dir_x = -1;
	(*data)->dir_y = 0;
	(*data)->plane_x = 0;
	(*data)->plane_y = 0.66;
}

void	gloop_data(t_data **data, int x)
{
	(*data)->cam_x = 2 * x / (*data)->win_w - 1;
	(*data)->time = 0;
	(*data)->o_time = 0;
	(*data)->r_pos_x = (*data)->pos_x;
	(*data)->r_pos_y = (*data)->pos_y;
	(*data)->r_dir_x = (*data)->dir_x + (*data)->plane_x * (*data)->cam_x;
	(*data)->r_dir_y = (*data)->dir_y + (*data)->plane_y * (*data)->cam_x;
	(*data)->map_x = (int)(*data)->r_pos_x;
	(*data)->map_y = (int)(*data)->r_pos_y;
	(*data)->d_dis_x = sqrt(1 + ((*data)->r_dir_y * (*data)->r_dir_y) / ((*data)->r_dir_x * (*data)->r_dir_x));
	(*data)->d_dis_y = sqrt(1 + ((*data)->r_dir_x * (*data)->r_dir_x) / ((*data)->r_dir_y * (*data)->r_dir_y));
	(*data)->hit = 0;

}

void    draw_vert_line(int x, int start, int end, int color, t_data **data)
{
	while (start <= end)
	{
		ft_put_px(&(*data), x, start, color);
		start++;
	}
}

void	gcolor(t_data **data)
{
	if (worldMap[(*data)->map_x][(*data)->map_y] == 1)
	{
		(*data)->color = 250;
	}
	if (worldMap[(*data)->map_x][(*data)->map_y] == 2)
	{
		(*data)->color = 200;
	}
	if (worldMap[(*data)->map_x][(*data)->map_y] == 3)
	{
		(*data)->color = 150;
	}
	if (worldMap[(*data)->map_x][(*data)->map_y] == 4)
	{
		(*data)->color = 100;
	}
}

void	gloop_dda(t_data **data)
{
	while ((*data)->hit == 0)
	{
		if ((*data)->s_dis_x < (*data)->s_dis_y)
		{
			(*data)->s_dis_x += (*data)->d_dis_x;
			(*data)->map_x += (*data)->step_x;
			(*data)->side = 0;
		}
		else
		{
			(*data)->s_dis_y += (*data)->d_dis_y;
			(*data)->map_y += (*data)->step_y;
			(*data)->side = 1;
		}
		if (worldMap[(*data)->map_x][(*data)->map_y] > 0)
			(*data)->hit = 1;
	}
	if ((*data)->side == 0)
		(*data)->p_wall_d = ((*data)->map_x - (*data)->r_pos_x + (1 - (*data)->step_x) / 2) / (*data)->r_dir_x;
	else
		(*data)->p_wall_d = ((*data)->map_y - (*data)->r_pos_y + (1 - (*data)->step_y) / 2) / (*data)->r_dir_y;

	(*data)->line_h = (int)((*data)->win_h / (*data)->p_wall_d);
	(*data)->d_start = -(*data)->line_h / 2 + (*data)->win_h / 2;
	if ((*data)->d_start < 0)
		(*data)->d_start = 0;
	(*data)->d_end = (*data)->line_h / 2 + (*data)->win_h / 2;
	if ((*data)->d_end >= (*data)->win_h)
		(*data)->d_end = (*data)->win_h - 1;
	gcolor(&(*data));

}

int		game_loop(t_data **data)
{
	int		x;

	x = -1;
	ft_create_image(&(*data), 1);
	while (++x < (*data)->win_w)
	{
		gloop_data(&(*data), x);
		if ((*data)->r_dir_x < 0)
		{
			(*data)->step_x = -1;
			(*data)->s_dis_x = ((*data)->r_pos_x - (*data)->map_x) * (*data)->d_dis_x;
		}
		else
		{
			(*data)->step_x = 1;
			(*data)->s_dis_x = ((*data)->map_x + 1.0 - (*data)->r_pos_x) * (*data)->d_dis_x;
		}
		if ((*data)->r_dir_y < 0)
		{
			(*data)->step_y = -1;
			(*data)->s_dis_y = ((*data)->r_pos_y - (*data)->map_y) * (*data)->d_dis_y;
		}
		else
		{
			(*data)->step_y = 1;
			(*data)->s_dis_y = ((*data)->map_y + 1.0 - (*data)->r_pos_y) * (*data)->d_dis_y;
		}
		gloop_dda(&(*data));
		draw_vert_line(x, (*data)->d_start, (*data)->d_end, (*data)->color, &(*data));
	}
	ft_create_image(&(*data), 2);
	return (0);
}

int		ev_hook(int key, t_data **data)
{
	if (key == KEY_W)
	{
		if(worldMap[(int)((*data)->pos_x + (*data)->dir_x * 8)][(int)(*data)->pos_y] == false)
			(*data)->pos_x += (*data)->dir_x * 8;
		if(worldMap[(int)(*data)->pos_x][(int)((*data)->pos_y + (*data)->dir_y * 8)] == false)
			(*data)->pos_y+= (*data)->dir_y * 8;
	}
	//move backwards if no wall behind you
	/*if (key == KEY_S)
	{
		if(worldMap[int(posX - dirX * moveSpeed)][int(posY)] == false) posX -= dirX * moveSpeed;
		if(worldMap[int(posX)][int(posY - dirY * moveSpeed)] == false) posY -= dirY * moveSpeed;
	}*/
	if (key == KEY_D)
	{
		//both camera direction and camera plane must be rotated
		(*data)->rot_s = 0.01;
		double oldDirX = (*data)->dir_x;
		(*data)->dir_x = (*data)->dir_x  * cos(-(*data)->rot_s) - (*data)->dir_y * sin(-(*data)->rot_s);
		(*data)->dir_y  = oldDirX * sin(-(*data)->rot_s) + (*data)->dir_y * cos(-(*data)->rot_s);
		double oldPlaneX = (*data)->plane_x;
		(*data)->plane_x = (*data)->plane_x * cos(-(*data)->rot_s) - (*data)->plane_y * sin(-(*data)->rot_s);
		(*data)->plane_y = oldPlaneX * sin(-(*data)->rot_s) + (*data)->plane_y * cos(-(*data)->rot_s);
	}
	if (key == KEY_A)
	{
		//both camera direction and camera plane must be rotated
		(*data)->rot_s = 0.1;
		double oldDirX = (*data)->dir_x;
		(*data)->dir_x = (*data)->dir_x  * cos((*data)->rot_s) - (*data)->dir_y * sin((*data)->rot_s);
		(*data)->dir_y  = oldDirX * sin((*data)->rot_s) + (*data)->dir_y * cos((*data)->rot_s);
		double oldPlaneX = (*data)->plane_x;
		(*data)->plane_x = (*data)->plane_x * cos((*data)->rot_s) - (*data)->plane_y * sin((*data)->rot_s);
		(*data)->plane_y = oldPlaneX * sin((*data)->rot_s) + (*data)->plane_y * cos((*data)->rot_s);
	}
	return (0);
}

int		main(void)
{
	t_data *data;

	data = (t_data *)malloc(sizeof(t_data));
	standart_data(&data);
	mlx_set(&data);
	mlx_hook(data->win, 2, 3, ev_hook, &data);
	mlx_loop_hook(data->mlx, &game_loop, &data);
	mlx_loop(data->mlx);
}