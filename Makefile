# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdelobbe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/08 09:35:06 by pdelobbe          #+#    #+#              #
#    Updated: 2016/04/08 09:35:08 by pdelobbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	wolf3d

FLG =	-Wall -Wextra -Werror

SRC =	main.c \
		init.c \
		map.c \
		hooks.c \
		moves.c \
		draw.c \
		skybox.c \
		minimap.c \
		fonts.c \
		text_a_to_e.c \
		text_f_to_j.c \
		text_k_to_o.c \
		text_p_to_t.c \
		text_u_to_y.c \
		text_z.c \
		raycasting.c

OBJ =	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	make -C minilibx_macos
	gcc -O3 $(FLG) -I libft/includes/ -c $(SRC)
	gcc -g -o $(NAME) $(OBJ) -L./libft/ -lft -L./minilibx_macos/ -lmlx -framework OpenGL -framework AppKit

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
