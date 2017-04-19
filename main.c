#include "wolf.h"

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

void    st_data(t_data **data)
{
    (*data)->mlx = mlx_init();
    (*data)->win_width = 512;
    (*data)->win_height = 384;
    (*data)->win = mlx_new_window((*data)->mlx, 512, 384, "Wolf3D");
    (*data)->pos_x = 22;
    (*data)->pos_y = 12;
    (*data)->dir_x = -1;
    (*data)->dir_y = 0;
    (*data)->plane_x = 0;
    (*data)->plane_y = 0.66;
}

void    draw_vert_line(int x, int start, int end, int color, t_data **data)
{
    if (start > end)
    {
        while (start >= end)
        {
            ft_put_px(&(*data), x, start, color);
            start--;
        }
    }
    else
    {
        while (start <= end)
        {
            ft_put_px(&(*data), x, start, color);
            start++;
        }
    }
}

int   g_loop(t_data **data)
{
    int x;

    x = -1;
    ft_create_image(&(*data), 1);
    while (++x < (*data)->win_width)
    {
        (*data)->camera_x = 2 * x / (*data)->win_width - 1;
        (*data)->ray_pos_x = (*data)->pos_x;
        (*data)->ray_pos_y = (*data)->pos_y;
        (*data)->ray_dir_x = (*data)->dir_x + (*data)->plane_x * (*data)->camera_x;
        (*data)->ray_dir_y = (*data)->dir_y + (*data)->plane_y * (*data)->camera_x;

        (*data)->map_x = (int)(*data)->ray_pos_x;
        (*data)->map_y = (int)(*data)->ray_pos_y;
        (*data)->delta_dist_x = sqrt(1 + ((*data)->ray_dir_y * (*data)->ray_dir_y) / (*data)->ray_dir_x * (*data)->ray_dir_x);
        (*data)->delta_dist_y = sqrt(1 + ((*data)->ray_dir_x * (*data)->ray_dir_x) / (*data)->ray_dir_y * (*data)->ray_dir_y);
        (*data)->hit = 0;
        if ((*data)->ray_dir_x < 0)
        {
            (*data)->step_x = -1;
            (*data)->side_dist_x = ((*data)->ray_pos_x - (*data)->map_x) * (*data)->delta_dist_x;
        }
        else
        {
            (*data)->step_x  = 1;
            (*data)->side_dist_x = ((*data)->map_x + 1.0 - (*data)->ray_pos_x) * (*data)->delta_dist_x;
        }
        if ((*data)->ray_dir_y < 0)
        {
            (*data)->step_y = -1;
            (*data)->side_dist_y = ((*data)->ray_pos_y - (*data)->map_y) * (*data)->delta_dist_y;
        }
        else
        {
            (*data)->step_y = 1;
            (*data)->side_dist_y = ((*data)->map_y + 1.0 - (*data)->ray_pos_y) * (*data)->delta_dist_y;
        }
        while ((*data)->hit == 0)
        {
            if ((*data)->side_dist_x < (*data)->side_dist_y)
            {
                (*data)->side_dist_x += (*data)->delta_dist_x;
                (*data)->map_x += (*data)->step_x;
                (*data)->side = 0;
            }
            else
            {
                (*data)->side_dist_y += (*data)->delta_dist_y;
                (*data)->map_y += (*data)->step_y;
                (*data)->side = 1;
            }
            if (worldMap[(*data)->map_x][(*data)->map_y] > 0)
                (*data)->hit = 1;
        }
        if ((*data)->side == 0)
            (*data)->perp_wall_dist = ((*data)->map_x - (*data)->ray_pos_x + (1 - (*data)->step_x) / 2) / (*data)->ray_dir_x;
        else
            (*data)->perp_wall_dist = ((*data)->map_y - (*data)->ray_pos_y + (1 - (*data)->step_y) / 2) / (*data)->ray_dir_y;
        (*data)->line_height = (int)((*data)->win_height / (*data)->perp_wall_dist);
        (*data)->draw_start = -(*data)->line_height / 2 + (*data)->win_height / 2;
        if ((*data)->draw_start < 0)
            (*data)->draw_start = 0;
        (*data)->draw_end = (*data)->line_height / 2 + (*data)->win_height / 2;
        if ((*data)->draw_end >= (*data)->win_height)
            (*data)->draw_end = (*data)->win_height - 1;
        int color;
        color = worldMap[(*data)->map_x][(*data)->map_y];
        if ((*data)->side == 1)
            color /= 2;
        draw_vert_line(x, (*data)->draw_start, (*data)->draw_end, color, &(*data));
    }
    ft_create_image(&(*data), 2);
	return (0);
}

int		key_f(int key, t_data **data)
{
	if (key == KEY_D)
	{
		//both camera direction and camera plane must be rotated
		double nus = M_PI / 10;
		double oldDirX = (*data)->dir_x ;
		(*data)->dir_x = (*data)->dir_x  * cos(-nus) - (*data)->dir_y * sin(-nus);
		(*data)->dir_y  = oldDirX * sin(-nus) + (*data)->dir_y * cos(-nus);
		double oldPlaneX = (*data)->plane_x;
		(*data)->plane_x = (*data)->plane_x * cos(-nus) - (*data)->plane_y * sin(-nus);
		(*data)->plane_y = oldPlaneX * sin(-nus) + (*data)->plane_y * cos(-nus);
	}
	return (0);
}

int     main(void)
{
    t_data *data;

    data = (t_data *)malloc(sizeof(t_data));
    st_data(&data);
	g_loop(&data);
	mlx_hook(data->win, 2, 3, key_f, &data);
    mlx_loop_hook(data->mlx, &g_loop, &data);
    mlx_loop(data->mlx);
}