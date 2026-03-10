#include <MLX42/MLX42.h>

int	main(void)
{
	mlx_t* mlx;

	mlx = mlx_init(800, 1200, "whatsup", true);
	if (mlx == 0)
		return (1);

	mlx_loop(mlx);
	mlx_terminate(mlx);
	return(0);
}
