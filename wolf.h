/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpanov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 16:10:50 by dpanov            #+#    #+#             */
/*   Updated: 2017/04/20 16:10:51 by dpanov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_WOLF_H
# define WOLF3D_WOLF_H
# include "mlx.h"
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <math.h>

typedef struct	s_data
{
	void		*mlx;
	void		*win;
	void		*img;
	char		*data;
	int			win_h;
	int			win_w;
	int			map_x;
	int			map_y;
	int			step_x;
	int			step_y;
	int			side;
	int			line_h;
	int			d_start;
	int			d_end;
	int			r;
	int			g;
	int			b;
	int			hit;
	int			tex_w;
	int			map[25][25];
	int			tex_h;
	double		pos_x;
	double		pos_y;
	double		dir_x;
	double		mov_s;
	double		dir_y;
	double		plane_x;
	double		plane_y;
	double		cam_x;
	double		r_pos_x;
	double		r_pos_y;
	double		r_dir_x;
	double		r_dir_y;
	double		s_dis_x;
	double		s_dis_y;
	double		d_dis_x;
	double		d_dis_y;
	double		p_wall_d;
	double		old_dir_x;
	double		old_plane_x;
	double		rot_s;
}				t_data;

void			ft_create_image(t_data *data, int n);
void			ft_put_px(t_data *data, int x, int y);
void			mlx_set(t_data *data);
void			f_read(t_data *data);
int				game_loop(t_data *data);
void			draw_vert_line(int x, int start, int end, t_data *data);
void			gcolor(t_data *data);
void			gloop_dda(t_data *data);
int				key_x(t_data *data);
int				ev_hook(int key, t_data *data);
void			evvv_hook(int key, t_data *data);
void			evv_hook(int key, t_data *data);
#endif

#ifdef __linux
# define KEY_ESCAPE         65307
# define KEY_F1             65470
# define KEY_F2             65471
# define KEY_F3             65472
# define KEY_F4             65473
# define KEY_F5             65474
# define KEY_F6             65475
# define KEY_F7             65476
# define KEY_F8             65477
# define KEY_F9             65478
# define KEY_F10            65479
# define KEY_F11            65480
# define KEY_F12            65481
# define KEY_SCROLL_LOCK    65300
# define KEY_PAUSE          65299
# define KEY_TILDE          96
# define KEY_1              49
# define KEY_2              50
# define KEY_3              51
# define KEY_4              52
# define KEY_5              53
# define KEY_6              54
# define KEY_7              55
# define KEY_8              56
# define KEY_9              57
# define KEY_0              48
# define KEY_MINUS          45
# define KEY_UNDERSCORE     45
# define KEY_EQUAL          61
# define KEY_BACKSPACE      65288
# define KEY_TAB            65289
# define KEY_Q              113
# define KEY_W              119
# define KEY_E              101
# define KEY_R              114
# define KEY_T              116
# define KEY_Y              121
# define KEY_U              117
# define KEY_I              105
# define KEY_O              111
# define KEY_P              112
# define KEY_OPEN_BRACKET   91
# define KEY_OPEN_BRACE     91
# define KEY_CLOSE_BRACKET  93
# define KEY_CLOSE_BRACE    93
# define KEY_BACKSLASH      92
# define KEY_PIPE           92
# define KEY_CAPSLOCK       65509
# define KEY_A              97
# define KEY_S              115
# define KEY_D              100
# define KEY_F              102
# define KEY_G              103
# define KEY_H              104
# define KEY_J              106
# define KEY_K              107
# define KEY_L              108
# define KEY_COLON          52
# define KEY_SEMI_COLON     52
# define KEY_SIMPLE_QUOTE   39
# define KEY_DOUBLE_QUOTES  39
# define KEY_ENTER          65293
# define KEY_SHIFT_LEFT     65505
# define KEY_Z              122
# define KEY_X              120
# define KEY_C              99
# define KEY_V              118
# define KEY_B              98
# define KEY_N              110
# define KEY_M              109
# define KEY_LESS_THAN      44
# define KEY_COMMA          44
# define KEY_GREATER_THAN   46
# define KEY_DOT            46
# define KEY_SLASH          47
# define KEY_QUESTION_MARK  47
# define KEY_SHIFT_RIGHT    65506
# define KEY_CTRL_LEFT      65507
# define KEY_ALT            65513
# define KEY_SPACEBAR       32
# define KEY_ALT_GR         65514
# define KEY_MENU           65383
# define KEY_CTRL_RIGHT     65508
# define KEY_LEFT           65361
# define KEY_DOWN           65364
# define KEY_RIGHT          65363
# define KEY_UP             65362
# define KEY_INSERT         65379
# define KEY_DEL            65535
# define KEY_HOME           65360
# define KEY_END            65367
# define KEY_PAGE_UP        65365
# define KEY_PAGE_DOWN      65366
# define KEY_NUM_LOCK       65407
# define KEY_PAD_1          65436
# define KEY_PAD_2          65433
# define KEY_PAD_3          65435
# define KEY_PAD_4          65430
# define KEY_PAD_5          65437
# define KEY_PAD_6          65432
# define KEY_PAD_7          65429
# define KEY_PAD_8          65431
# define KEY_PAD_9          65434
# define KEY_PAD_0          65438
# define KEY_PAD_DIVIDE     65455
# define KEY_PAD_MULTIPLY   65450
# define KEY_PAD_SUB        65453
# define KEY_PAD_ADD        65451
# define KEY_PAD_ENTER      65421
# define KEY_PAD_DOT        65439
# define KEY_PAD_DELETE     65439
#else
# define KEY_ESCAPE         53
# define KEY_F1             122
# define KEY_F2             120
# define KEY_F3             99
# define KEY_F4             118
# define KEY_F5             96
# define KEY_F6             97
# define KEY_F7             98
# define KEY_F8             100
# define KEY_F9             101
# define KEY_F10            109
# define KEY_F11            103
# define KEY_F12            111
# define KEY_F13            105
# define KEY_F14            107
# define KEY_F15            113
# define KEY_F16            106
# define KEY_F17            64
# define KEY_F18            79
# define KEY_F19            80
# define KEY_TILDE          50
# define KEY_1              18
# define KEY_2              19
# define KEY_3              20
# define KEY_4              21
# define KEY_5              23
# define KEY_6              22
# define KEY_7              26
# define KEY_8              28
# define KEY_9              25
# define KEY_0              29
# define KEY_MINUS          27
# define KEY_EQUAL          24
# define KEY_BACKSPACE      51
# define KEY_TAB            48
# define KEY_Q              12
# define KEY_W              13
# define KEY_E              14
# define KEY_R              15
# define KEY_T              17
# define KEY_Y              16
# define KEY_U              32
# define KEY_I              34
# define KEY_O              31
# define KEY_P              35
# define KEY_OPEN_BRACKET   33
# define KEY_OPEN_BRACE     33
# define KEY_CLOSE_BRACKET  30
# define KEY_CLOSE_BRACE    30
# define KEY_BACKSLASH      42
# define KEY_PIPE           42
# define KEY_CAPSLOCK       272
# define KEY_A              0
# define KEY_S              1
# define KEY_D              2
# define KEY_F              3
# define KEY_G              5
# define KEY_H              4
# define KEY_J              38
# define KEY_K              40
# define KEY_L              37
# define KEY_COLON          41
# define KEY_SEMI_COLON     41
# define KEY_SIMPLE_QUOTE   39
# define KEY_DOUBLE_QUOTES  39
# define KEY_ENTER          36
# define KEY_SHIFT_LEFT     257
# define KEY_Z              6
# define KEY_X              7
# define KEY_C              8
# define KEY_V              9
# define KEY_B              11
# define KEY_N              45
# define KEY_M              46
# define KEY_LESS_THAN      43
# define KEY_COMMA          43
# define KEY_GREATER_THAN   47
# define KEY_DOT            47
# define KEY_SLASH          44
# define KEY_QUESTION_MARK  44
# define KEY_SHIFT_RIGHT    258
# define KEY_CTRL_LEFT      256
# define KEY_COMMAND_LEFT   259
# define KEY_OPTION_LEFT    261
# define KEY_ALT            261
# define KEY_SPACEBAR       49
# define KEY_COMMAND_RIGHT  260
# define KEY_ALT_GR         262
# define KEY_FN             279
# define KEY_CTRL_RIGHT     269
# define KEY_LEFT           123
# define KEY_DOWN           125
# define KEY_RIGHT          124
# define KEY_UP             126
# define KEY_DEL            117
# define KEY_HOME           115
# define KEY_END            119
# define KEY_PAGE_UP        116
# define KEY_PAGE_DOWN      121
# define KEY_CLEAR          71
# define KEY_PAD_1          83
# define KEY_PAD_2          84
# define KEY_PAD_3          85
# define KEY_PAD_4          86
# define KEY_PAD_5          87
# define KEY_PAD_6          88
# define KEY_PAD_7          89
# define KEY_PAD_8          91
# define KEY_PAD_9          92
# define KEY_PAD_0          82
# define KEY_PAD_EQUAL      81
# define KEY_PAD_DIVIDE     75
# define KEY_PAD_MULTIPLY   67
# define KEY_PAD_SUB        78
# define KEY_PAD_ADD        69
# define KEY_PAD_ENTER      76
# define KEY_PAD_DOT        65
#endif
