#include "./minilibx-linux/mlx.h"
#include "includes/map.h"

// typedef struct	s_data {
// 	void	*img;
// 	char	*addr;
// 	int		bits_per_pixel;
// 	int		line_length;
// 	int		endian;
// }				t_data;

// void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
// {
// 	char	*dst;
// 	dst = malloc(100000);

// 	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
// 	*(unsigned int*)dst = color;
// }

// int	key_hook(int keycode, t_data *img)
// {
// 	int	i;
// 	int color = 0x0099FF66;
// 	i = 50;
// 	while (i++ < 500) {
// 		my_mlx_pixel_put(img, i, i, color);
// 	}
// 	printf("Hello from key_hook! \n");
// 	return (0);
// }


// int	main(void)
// {
// 	void	*mlx;
// 	void	*mlx_win;
// 	t_data	*img;

// 	img = malloc(sizeof(t_data));
// 	mlx = mlx_init();
// 	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
// 	img->img = mlx_new_image(mlx, 1920, 1080);
// 	img->addr = mlx_get_data_addr(img->img, &img->bits_per_pixel, &img->line_length,
// 								&img->endian);
	
// 	mlx_key_hook(mlx_win, key_hook, &img);
// 	mlx_put_image_to_window(mlx, mlx_win, img->img, 0, 0);
// 	mlx_loop(mlx);
// }

int main(int ac, char **av)
{
	t_map *map;
	int fd;
	char *line;
	int i = 0;
	int res = 0;
	map = malloc(sizeof(t_map));
	fd = open(av[1], O_RDONLY);
	map->grid = ft_calloc(1000000, 100);
	while(res = get_next_line(fd, &line) && *line != '\0')
	{
		printf("l1 -> %s\n", line);
		map->grid[i] = line;
		printf("grid -> %s\n", map->grid[i++]);
		printf("i -> %d\n", i);
		printf("gnl -> %d\n", res);
	}
	while(res = get_next_line(fd, &line) && *line != '\0')
	{
		printf("l1 -> %s\n", line);
		map->grid[i] = line;
		printf("grid -> %s\n", map->grid[i++]);
		printf("i -> %d\n", i);
	}
	while(res = get_next_line(fd, &line) && *line != '\0')
	{
		printf("l1 -> %s\n", line);
		map->grid[i] = line;
		printf("grid -> %s\n", map->grid[i++]);
		printf("i -> %d\n", i);
	}
	get_next_line(fd, &line);
		map->grid[i] = line;

	i = 0;
	while (map->grid[i][0] != '\0')
		printf("%s\n", map->grid[i++]);
	printf("l1 -> %s\n", line);

	return 0;
}