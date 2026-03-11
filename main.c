#include <stdio.h>
#include <string.h>
#include <MLX42/MLX42.h>

#define WIDTH 600
#define HEIGHT 800

void	set_color(mlx_image_t* shape, int width, int height, int color)
{
	int x;
	int y;

	y = 0;
	while (y < height)
	{
		x = 0;
		while (x < width)
		{
			mlx_put_pixel(shape, x, y, color);
			x++;
		}
		y++;
	}
}

void	my_key_hook(mlx_key_data_t keydata, void* param)
{
	struct mlx_image*	box;

	box = param;
	if (keydata.key == MLX_KEY_H && keydata.action == MLX_REPEAT)
	{
		set_color(box, box->width, box->height, 0x1f9fbfFF);
		box->instances[0].x -= 20;
		printf("The H Key is working\n");
	}
	if (keydata.key == MLX_KEY_L && keydata.action == MLX_REPEAT)
	{
		set_color(box, box->width, box->height, 0x5dc97aFF);
		box->instances[0].x += 20;
	}
	if (keydata.key == MLX_KEY_K && keydata.action == MLX_REPEAT)
	{
		printf("The K Key is working \n ");
		set_color(box, box->width, box->height, 0xd1a41bFF);
		box->instances[0].y -= 20;
	}
	if (keydata.key == MLX_KEY_J && keydata.action == MLX_REPEAT)
	{
		printf("The J Key is working \n ");
		set_color(box, box->width, box->height, 0x6500e0FF);
		box->instances[0].y += 20;
	}
}

int	main(void)
{
	mlx_t*		mlx;
	struct mlx_image*	image;
	struct mlx_image*	background;

	mlx = mlx_init(WIDTH, HEIGHT, "Window Content", true);
	if (mlx == 0)
		return (1);

	image = mlx_new_image (mlx, 100, 100);
		if (image == NULL)
			return (0);

	background = mlx_new_image (mlx, WIDTH, HEIGHT);
		if (background == NULL)
			return (0);

	memset(image->pixels, 222, image->width * image->height * sizeof(int32_t));
	memset(background->pixels, 222, background->width * background->height * sizeof(int32_t));

	set_color(background, background->width, background->height, 0x99e000FF);

	if (mlx_image_to_window(mlx, background, 0, 0) < 0)
		return (0);

	if (mlx_image_to_window(mlx, image, 400, 250) < 0)
		return (0);

	mlx_key_hook(mlx, my_key_hook, image);

	mlx_loop(mlx);
	mlx_terminate(mlx);
	return(0);
}
