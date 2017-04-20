#include "wolf.h"

int		ev_hook(int key, t_data **data)
{
	if (key == KEY_ESCAPE)
		exit (0);
	if (key == KEY_UP)
	{
		double sp = 0.1;
		if(!((*data)->map[(int)((*data)->pos_x + (*data)->dir_x * sp)][(int)(*data)->pos_y]))
			(*data)->pos_x += (*data)->dir_x * sp;
		if(!((*data)->map[(int)(*data)->pos_x][(int)((*data)->pos_y + (*data)->dir_y * sp)]))
			(*data)->pos_y+= (*data)->dir_y * sp;
	}
	//move backwards if no wall behind you
	if (key == KEY_DOWN)
	{
		double sp = 0.1;
		if(!((*data)->map[(int)((*data)->pos_x - (*data)->dir_x * sp)][(int)(*data)->pos_y]))
			(*data)->pos_x -= (*data)->dir_x * sp;
		if(!((*data)->map[(int)(*data)->pos_x][(int)((*data)->pos_y - (*data)->dir_y * sp)]))
			(*data)->pos_y -= (*data)->dir_y * sp;
	}
	if (key == KEY_RIGHT)
	{
		(*data)->rot_s = 0.1;
		double oldDirX = (*data)->dir_x;
		(*data)->dir_x = (*data)->dir_x  * cos(-(*data)->rot_s) - (*data)->dir_y * sin(-(*data)->rot_s);
		(*data)->dir_y  = oldDirX * sin(-(*data)->rot_s) + (*data)->dir_y * cos(-(*data)->rot_s);
		double oldPlaneX = (*data)->plane_x;
		(*data)->plane_x = (*data)->plane_x * cos(-(*data)->rot_s) - (*data)->plane_y * sin(-(*data)->rot_s);
		(*data)->plane_y = oldPlaneX * sin(-(*data)->rot_s) + (*data)->plane_y * cos(-(*data)->rot_s);
	}
	if (key == KEY_LEFT)
	{
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

int		key_x(t_data **data)
{
	(*data)->r = 0;
	exit(0);
	return (0);
}