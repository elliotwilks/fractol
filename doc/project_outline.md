Summary: This project involves creating graphically beautiful fractals.

Objectives

You will use MiniLibX.
Conains the necessary tools to:
    - open a window
    - create images
    - deal with keyboard & mouse events

You will: 
    - use the mathematical concept of complex numbers
    - explore computer graphics
    - practice event handling.

Common Instructions

    - All heap-allocated memory must be properly freed 
    - Makefile must contain the rules $(NAME), all, clean, fclean, re.

External Function
    - open
    - close
    - read
    - write
    - malloc
    - free
    - perror
    - strerror
    - exit.

    - All functions of the math library (-lm compiler option, man 3 math).
    - All functions of the MiniLibX library.
    - gettimeofday()
    - Libft authorized

Your project must comply with the following rules:
    - You must use the MiniLibX library. 
    - There is a version available on the school machines
    - Or can be installed it using its sources.

    - Your program must offer the Julia set and the Mandelbrot set. <---- What is this?
    
    - The mouse wheel allows zooming in and out almost infinitely.

    - You must be able to create different Julia sets by passing different parameters to the program. <-- Again what is a julia set?
    
    - A parameter is passed on the command line to define what type of fractal will be displayed in a window. <--- What parameter?

    - You can handle more parameters to use them as rendering options.

    - If no parameter is provided or if the parameter is invalid, display a list of available parameters and exit.
    
    - You must use at least a few colors to reveal the depth of each fractal.


Graphic management

    - Your program has to display the image in a window.
    - Window management must remain smooth (e.g., switching to another window, minimizing, etc.).
    - Pressing ESC must close the window and quit the program in a clean way.
    - Clicking on the cross on the window’s frame must close the window and quit the program in a clean way.
    - The use of the images of the MiniLibX library is mandatory.