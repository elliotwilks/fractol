CC = gcc

SRC = main.c 

NAME = fractol

all:
	$(CC) $(SRC) MLX42/build/libmlx42.a -IMLX42/include  -ldl -lglfw -pthread -lm -o $(NAME)

clean:
	rm -rf $(NAME)