// #include "includes/map.h"
// #include "./minilibx-linux/mlx.h"
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

// 	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
// 	*(unsigned int*)dst = color;
// }

// int	main(void)
// {
// 	void	*mlx;
// 	void	*mlx_win;
// 	t_data	img;
// 	int i = 0;
// 	double j = 100.000;

// 	mlx = mlx_init();
// 	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
// 	img.img = mlx_new_image(mlx, 1920, 1080);
// 	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
// 								&img.endian);
// 	while (i < 300)
// 		my_mlx_pixel_put(&img, i++, j+= 0.5, 0x00FF0000);
// 	while (j < 600)
// 		my_mlx_pixel_put(&img, i, j+= 1, 0x00FF0000);
// 	while (i > 0)
// 		my_mlx_pixel_put(&img, i--, j+= 0.5, 0x00FF0000);
// 	i = 1650;
// 	j = 250.000;
// 	while (j < 600)
// 		my_mlx_pixel_put(&img, i, j+= 1, 0x00FF0000);
// 	i = 300;
// 	j = 600.000;
// 	while (i < 1650)
// 		my_mlx_pixel_put(&img, i++, j, 0x00FF0000);
// 	j = 250.000;
// 	i = 300;
// 	while (i < 1650)
// 		my_mlx_pixel_put(&img, i++, j, 0x00FF0000);
// 	// i = 0;
// 	while (i < 1920)
// 		my_mlx_pixel_put(&img, i++, j -= 0.5, 0x00FF0000);
// 	i = 1650;
// 	j = 600.000;
// 	while (i < 1920)
// 		my_mlx_pixel_put(&img, i++, j += 0.5, 0x00FF0000);
// 	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
// 	mlx_loop(mlx);
// }

#include "./minilibx-linux/mlx.h"

// typedef struct s_data {
//     void    *img;
//     char    *addr;
//     int     bits_per_pixel;
//     int     line_length;
//     int     endian;
// }   t_data;

// void    my_mlx_pixel_put(t_data *data, int x, int y, int color)
// {
//     char    *dst;

//     dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
//     *(unsigned int*)dst = color;
// }

// int main(void)
// {
//     void    *mlx;
//     void    *mlx_win;
//     t_data  img;
//     int     i = 0;
//     double  j = 100.000;

//     mlx = mlx_init();
//     mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
//     img.img = mlx_new_image(mlx, 1920, 1080);
//     img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
//                                 &img.endian);

// 	//DA AVEC DES NEONS
// 	//DA AVEC DES NEONS

// 	//DA AVEC DES NEONS

// 	//DA AVEC DES NEONS

// 	//DA AVEC DES NEONS

// 	//DA AVEC DES NEONS

// 	//DA AVEC DES NEONS

// 	//DA AVEC DES NEONS

// 	//DA AVEC DES NEONS


//     // Remplissage du plafond en bleu
//     while (i < 1920)
//         my_mlx_pixel_put(&img, i++, 0, 0x000000FF); // Bleu

//     // Remplissage du sol en gris foncé
//     i = 0;
//     while (i < 1920)
//         my_mlx_pixel_put(&img, i++, 1080, 0x00404040); // Gris foncé

//     // Remplissage des murs en brun
//     i = 0;
//     j = 100.000;
//     while (i < 300)
//         my_mlx_pixel_put(&img, i++, j += 0.5, 0x00404000); // Brun
//     while (j < 600)
//         my_mlx_pixel_put(&img, i, j += 1, 0x00404000); // Brun
//     while (i > 0)
//         my_mlx_pixel_put(&img, i--, j += 0.5, 0x00404000); // Brun
//     i = 1650;
//     j = 250.000;
//     while (j < 600)
//         my_mlx_pixel_put(&img, i, j += 1, 0x00404000); // Brun
//     i = 300;
//     j = 600.000;
//     while (i < 1650)
//         my_mlx_pixel_put(&img, i++, j, 0x00404000); // Brun
//     j = 250.000;
//     i = 300;
//     while (i < 1650)
//         my_mlx_pixel_put(&img, i++, j, 0x00404000); // Brun
//     while (i < 1920)
//         my_mlx_pixel_put(&img, i++, j -= 0.5, 0x00404000); // Brun
//     i = 1650;
//     j = 600.000;
//     while (i < 1920)
//         my_mlx_pixel_put(&img, i++, j += 0.5, 0x00404000); // Brun

//     mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
//     mlx_loop(mlx);
//     return (0);
// }

// #include "./minilibx-linux/mlx.h"
// #include <math.h>

// #define WINDOW_WIDTH 800
// #define WINDOW_HEIGHT 600
// #define FOV (M_PI / 3)  // Champ de vision de 60 degrés en radians
// #define MAP_WIDTH 24
// #define MAP_HEIGHT 24



// typedef struct s_data {
//     void    *mlx;
//     void    *win;
//     void    *img;
//     char    *addr;
//     int     bits_per_pixel;
//     int     line_length;
//     int     endian;
// }   t_data;

// void    my_mlx_pixel_put(t_data *data, int x, int y, int color)
// {
//     char    *dst;

//     dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
//     *(unsigned int*)dst = color;
// }

#include "./minilibx-linux/mlx.h"
#include <math.h>

#define WINDOW_WIDTH 1920
#define WINDOW_HEIGHT 1080
#define FOV (M_PI / 3)  // Champ de vision de 60 degrés en radians
#define MAP_WIDTH 24
#define MAP_HEIGHT 24

int worldMap[MAP_WIDTH][MAP_HEIGHT] =
{
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

typedef struct s_data {
    void    *mlx;
    void    *win;
    void    *img;
    char    *addr;
    int     bits_per_pixel;
    int     line_length;
    int     endian;
}   t_data;

void    my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
    char    *dst;

    dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
    *(unsigned int*)dst = color;
}

void    draw_walls(t_data *img)
{
    float playerX = 12.0f;  // Placement dans la carte coordonnée x
    float playerY = 12.0f;  // Placement dans la carte coordonnée y
    float playerA = 0.0f;   // Orientation vers la droite de la carte

    for (int x = 0; x < WINDOW_WIDTH; x++)
    {
        // Calcul de l'angle du rayon
        float rayAngle = (playerA - FOV / 2) + ((float)x / WINDOW_WIDTH) * FOV;

        // Projection de rayon
        float distanceToWall = 0;
        float rayX = playerX;
        float rayY = playerY;
        float rayDirX = sin(rayAngle);
        float rayDirY = cos(rayAngle);

        // Calcul de la distance au mur
        while (distanceToWall < 100)
        {
            rayX += rayDirX;
            rayY += rayDirY;
            if (rayX < 0 || rayX >= MAP_WIDTH || rayY < 0 || rayY >= MAP_HEIGHT)
            {
                distanceToWall = 100;
                break;
            }
            else if (worldMap[(int)rayX][(int)rayY] == 1)
            {
                break;
            }
            distanceToWall += 0.1f;
        }

        // Calcul de la hauteur du mur en fonction de la distance
        int wallHeight = (int)(WINDOW_HEIGHT / distanceToWall);
        wallHeight = log(wallHeight) * 50;

        // Calcul des coordonnées de début et de fin du mur
        int wallTop = WINDOW_HEIGHT / 2 - wallHeight / 2;
        int wallBottom = WINDOW_HEIGHT / 2 + wallHeight / 2;

        // Remplissage des murs
        for (int y = 0; y < WINDOW_HEIGHT; y++)
        {
            if (y < wallTop)
                my_mlx_pixel_put(img, x, y, 0x87CEEB); // Plafond (ciel bleu)
            else if (y >= wallTop && y < wallBottom)
                my_mlx_pixel_put(img, x, y, 0xA52A2A); // Mur (rouge brun)
            else
                my_mlx_pixel_put(img, x, y, 0x808080); // Sol (gris)
        }
    }
}

int main(void)
{
    t_data  img;

    img.mlx = mlx_init();
    img.win = mlx_new_window(img.mlx, WINDOW_WIDTH, WINDOW_HEIGHT, "Raycasting");
    img.img = mlx_new_image(img.mlx, WINDOW_WIDTH, WINDOW_HEIGHT);
    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
                                &img.endian);

    draw_walls(&img);

    mlx_put_image_to_window(img.mlx, img.win, img.img, 0, 0);
    mlx_loop(img.mlx);
    return (0);
}


// typedef struct s_data {
//     void    *img;
//     char    *addr;
//     int     bits_per_pixel;
//     int     line_length;
//     int     endian;
// }   t_data;

// void    my_mlx_pixel_put(t_data *data, int x, int y, int color)
// {
//     char    *dst;

//     dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
//     *(unsigned int*)dst = color;
// }

// int main(void)
// {
//     void    *mlx;
//     void    *mlx_win;
//     t_data  img;
//     int     i;
//     int     j;

//     mlx = mlx_init();
//     mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
//     img.img = mlx_new_image(mlx, 1920, 1080);
//     img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
//                                 &img.endian);

//     // Remplissage du plafond en bleu
//     for (i = 0; i < 1920; i++) {
//         for (j = 0; j < 540; j++) {
//             my_mlx_pixel_put(&img, i, j, 0x0000FFFF); // Bleu
//         }
//     }

//     // Remplissage du sol en gris foncé
//     for (i = 0; i < 1920; i++) {
//         for (j = 540; j < 1080; j++) {
//             my_mlx_pixel_put(&img, i, j, 0x00404040); // Gris foncé
//         }
//     }

//     // Remplissage des murs en brun
//     for (i = 300; i < 1650; i++) {
//         for (j = 100; j < 600; j++) {
//             my_mlx_pixel_put(&img, i, j, 0x00404000); // Brun
//         }
//     }

//     mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
//     mlx_loop(mlx);
//     return (0);
// }


// int	key_hook(int keycode, t_data *img)
// {
// 	int	i;


// 	printf("Hello from key_hook! \n");
// 	return (0);
// }



 	// nt main(int ac, char **av)
	
	// t_map *map;
	// int fd;
	// char *line;
	// int i = 0;
	// int res = 0;
	// map = malloc(sizeof(t_map));
	// fd = open(av[1], O_RDONLY);
	// map->grid = ft_calloc(1000000, 100);
	// while(res = get_next_line(fd, &line) && *line != '\0')
	// {
	// 	printf("l1 -> %s\n", line);
	// 	map->grid[i] = line;
	// 	printf("grid -> %s\n", map->grid[i++]);
	// 	printf("i -> %d\n", i);
	// 	printf("gnl -> %d\n", res);
	// }
	// while(res = get_next_line(fd, &line) && *line != '\0')
	// {
	// 	printf("l1 -> %s\n", line);
	// 	map->grid[i] = line;
	// 	printf("grid -> %s\n", map->grid[i++]);
	// 	printf("i -> %d\n", i);
	// }
	// while(res = get_next_line(fd, &line) && *line != '\0')
	// {
	// 	printf("l1 -> %s\n", line);
	// 	map->grid[i] = line;
	// 	printf("grid -> %s\n", map->grid[i++]);
	// 	printf("i -> %d\n", i);
	// }
	// get_next_line(fd, &line);
	// 	map->grid[i] = line;

	// i = 0;
	// while (map->grid[i][0] != '\0')
	// 	printf("%s\n", map->grid[i++]);
	// printf("l1 -> %s\n", line);

	// return 0;
	



// int main()
// {

// 	int pixel_bits;
// 	int line_bytes;
// 	int endian;
// 	void *mlx = mlx_init();
// 	void *win = mlx_new_window(mlx, 640, 360, "Tutorial Window - Create Image");

// 	void *image = mlx_new_image(mlx, 640, 360);
// 	char *buffer = mlx_get_data_addr(image, &pixel_bits, &line_bytes, &endian);

// 	int color = 0xABCDEF;

// 	if (pixel_bits != 32)
// 		color = mlx_get_color_value(mlx, color);

// 	for (int y = 0; y < 360; ++y)
// 		for (int x = 0; x < 640; ++x)
// 		{
// 			int pixel = (y * line_bytes) + (x * 4);

// 			if (endian == 0) // Most significant (Alpha) byte first
// 			{
// 				buffer[pixel + 0] = (color >> 24);
// 				buffer[pixel + 1] = (color >> 16) & 0xFF;
// 				buffer[pixel + 2] = (color >> 8) & 0xFF;
// 				buffer[pixel + 3] = (color) & 0xFF;
// 			}
// 			else if (endian == 1) // Least significant (Blue) byte first
// 			{
// 				buffer[pixel + 0] = (color) & 0xFF;
// 				buffer[pixel + 1] = (color >> 8) & 0xFF;
// 				buffer[pixel + 2] = (color >> 16) & 0xFF;
// 				buffer[pixel + 3] = (color >> 24);
// 			}
// 		}
// 	mlx_put_image_to_window(mlx, win, image, 0, 0);
// 	mlx_loop(mlx);
// }