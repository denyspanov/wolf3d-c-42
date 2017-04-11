#include "wolf.h"

void	mlx_set(t_data **data)
{
	(*data)->mlx = mlx_init();
	(*data)->win = mlx_new_window((*data)->mlx, (*data)->win_width, (*data)->win_height, "Wolf3D");
}