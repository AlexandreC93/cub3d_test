#ifndef MAP_H
# define MAP_H

#include "../libft/libft.h"

typedef struct s_map
{
	char **grid;
	char *n_texture_path;
	char *s_texture_path;
	char *e_texture_path;
	char *w_texture_path;

	char *c_color;
	char *f_color;

}	t_map;

#endif