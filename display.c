#include "wolf.h"
void	ft_put_px(t_data **data, int x, int y)
{
	int p;

	p = (x * 4) + (y * (*data)->win_w * 4);
	if ((p >= 0 && p < ((*data)->win_w * (*data)->win_h * 4) &&
		 x < (*data)->win_w && y < (*data)->win_h && x > 0))
	{
		(*data)->data[p] = (*data)->b;
		(*data)->data[p + 1] = (*data)->g;
		(*data)->data[p + 2] = (*data)->r;
	}
}

void    draw_vert_line(int x, int start, int end, t_data **data)
{
	while (start <= end)
	{
		ft_put_px(&(*data), x, start);
		start++;
	}
}

void	gcolor(t_data **data)
{
	if ((*data)->map[(*data)->map_x][(*data)->map_y] == 1)
	{
		(*data)->r = 250;
		(*data)->g = 250;
		(*data)->b = 250;
	}
	if ((*data)->map[(*data)->map_x][(*data)->map_y] == 2)
	{
		(*data)->r = 100;
		(*data)->g = 100;
		(*data)->b = 250;
	}
	if ((*data)->map[(*data)->map_x][(*data)->map_y] == 3)
	{
		(*data)->r = 250;
		(*data)->g = 250;
		(*data)->b = 250;
	}
	if ((*data)->map[(*data)->map_x][(*data)->map_y] == 4)
	{
		(*data)->r = 250;
		(*data)->g = 250;
		(*data)->b = 250;
	}
}

void	ft_create_image(t_data **data, int n)
{
	int		sizeline;
	int		endian;
	int		bpp;

	if (n == 1)
	{
		(*data)->img = mlx_new_image((*data)->mlx,
									 (*data)->win_w, (*data)->win_h);
		(*data)->data = mlx_get_data_addr((*data)->img,
										  &bpp, &sizeline, &endian);
	}
	if (n == 2)
	{
		mlx_put_image_to_window((*data)->mlx, (*data)->win, (*data)->img, 0, 0);
		mlx_destroy_image((*data)->mlx, (*data)->img);
	}
}