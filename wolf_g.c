#include "wolf.h"

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
		if ((*data)->map[(*data)->map_x][(*data)->map_y] > 0)
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

void	gloop_data(t_data **data, int x)
{
	(*data)->cam_x = 2 * x / (double)(*data)->win_w - 1;
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

int		game_loop(t_data **data)
{
	int	x;

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
		draw_vert_line(x, (*data)->d_start, (*data)->d_end, &(*data));
	}
	ft_create_image(&(*data), 2);
	return (0);
}