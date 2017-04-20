#include "wolf.h"

void    standart_data(t_data **data)
{
	(*data)->win_w = 1280;
	(*data)->win_h = 720;
	(*data)->tex_h = 64;
	(*data)->tex_w = 64;
	(*data)->pos_x = 2;
	(*data)->pos_y = 23;
	(*data)->dir_x = -1;
	(*data)->dir_y = 0;
	(*data)->plane_x = 0;
	(*data)->plane_y = 0.66;
}

int		main(int argc, char **argv)
{
	t_data *data;
	atexit(report_mem_leak);
	data = (t_data *)malloc(sizeof(t_data));
	standart_data(&data);
	f_read(&data, argv[1]);
	mlx_set(&data);
	mlx_hook(data->win, 2, 3, ev_hook, &data);
	mlx_hook(data->win, 17, 0, key_x, &data);
	mlx_loop_hook(data->mlx, &game_loop, &data);
	/*mlx_loop(data->mlx);*/
	return (0);
}