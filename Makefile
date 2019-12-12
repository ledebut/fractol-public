# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: ledebut <ledebut@student.le-101.fr>        +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/16 07:47:22 by ledebut      #+#   ##    ##    #+#        #
#    Updated: 2019/12/12 11:07:04 by ledebut     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = fractol

FLAGS = -Wall -Wextra -Werror

SRC =	src/main.c \
		src/deal_key.c \
		src/deal_mouse.c \
		src/ft_julia.c \
		src/ft_mandelbrot.c \
		src/ft_burningship.c \
		src/deal_key_split.c \
		src/ft_init_window_and_image.c \
		src/deal_change_color.c \
		src/ft_put_pixel.c \
		src/ft_reset.c \
		src/ft_options.c \
		src/ft_print_fract.c \
		libft/ft_putstr.c \
		libft/ft_strlen.c \
		libft/ft_itoa.c \
		libft/ft_strdup.c \
		libft/ft_strcat.c \
		libft/ft_strdel.c \
		

OBJ = $(subst .c,.o,$(SRC))

LIGHT_PINK = \033[0;38;5;200m

PINK = \033[0;38;5;198m

DARK_BLUE = \033[0;38;5;110m

GREEN = \033[0;38;5;111m

LIGHT_GREEN = \033[0;38;5;121m

FLASH_GREEN = \033[33;32m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(DARK_BLUE)\nFichiers de "$(NAME)" compilés\n"
	@echo "$(LIGHT_GREEN)Compilation de la Libft : "
	@make -C ./libft/
	@gcc $(FLAGS) -o $(NAME) -I /usr/local/include $(OBJ) -L ./mlx/ -lmlx -framework OpenGL -framework AppKit\

%.o: %.c fdf.h
	@gcc $(FLAGS) -I libft/includes -o $@ -c $<
	@echo "$(DARK_BLUE).\c"

clean:
	@rm -rf $(OBJ)
	@make -C ./libft/ clean
	@echo "$(LIGHT_PINK)Suppression des .o de "$(NAME)"\n"

fclean: clean
	@rm -rf $(NAME)
	@make -C ./libft/ fclean
	@echo "$(PINK)Suppression de" $(NAME)"\n"

re: fclean all