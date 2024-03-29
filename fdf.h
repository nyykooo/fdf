/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:01:32 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/21 16:47:23 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libs/get_next_line/get_next_line.h"
# include "libs/libft/libft.h"
# include "libs/mlx-linux/mlx.h"
# include "libs/mlx-linux/mlx_int.h"
# include <fcntl.h>
# include <errno.h>
# include <math.h>
# include <stdio.h>
# include <unistd.h>

#  define KEY_ESC 65307

typedef struct s_fdf
{
	void	*mlx;
	void	*win;
}	t_fdf;

int	map_keys(int key_code, t_fdf *param);

#endif