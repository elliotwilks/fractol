#include <string.h>
#include <MLX42/MLX42.h>

int	main(void)
{
	mlx_t*		mlx;
	struct mlx_image*	image;

	mlx = mlx_init(800, 1200, "whatsup here is the window content", true);
	if (mlx == 0)
		return (1);

	image = mlx_new_image (mlx, 100, 100);
		if (image == NULL)
			return (0);

	memset(image->pixels, 80, image->width * image->height * sizeof(int32_t));

	if (mlx_image_to_window(mlx, image, 0, 0) < 0)
		return (0);



	mlx_loop(mlx);
	mlx_terminate(mlx);
	return(0);
}
