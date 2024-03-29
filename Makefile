# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 09:59:57 by ncampbel          #+#    #+#              #
#    Updated: 2024/02/21 16:34:00 by ncampbel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SRC = fdf.c \
		sources/map_keys.c
OBJ = $(SRC:.c=.o)
GNL = libs/get_next_line/get_next_line.a
MLX = libs/mlx-linux/libmlx.a -lm -lz -lXext -lX11
LIBFT = libs/libft/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ) $(MLX) $(GNL)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(GNL) $(MLX) -o $(NAME)

$(LIBFT):
	make -C libs/libft

$(MLX):
	make -C libs/mlx-linux

$(GNL):
	make -C libs/get_next_line

clean:
	rm -f $(OBJ)
	make clean -C libs/libft
	make clean -C libs/mlx-linux
	make clean -C libs/get_next_line

fclean: clean
	rm -f $(NAME)
	make fclean -C libs/libft
	make clean -C libs/mlx-linux
	make fclean -C libs/get_next_line

re: fclean all

.PHONY: all clean fclean re
