#include "wolf.h"

void	put_data(t_data **data, char **src, int x)
{
	int i;

	i = -1;
	while (src[++i])
	{
		(*data)->map[x][i] = ft_atoi(src[i]);
	}
}

void	f_read(t_data **data, char *s)
{
	int		fd;
	char	*line;
	char	**str;
	int		i;

	fd = open(s, O_RDONLY);
	i = 0;
	while (get_next_line(fd, &line) > 0)
	{
		str = ft_strsplit(line, ' ');
		put_data(&(*data), str, i);
		i++;
	}
}