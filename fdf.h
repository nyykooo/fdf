/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:01:32 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/17 18:31:52 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libs/get_next_line/get_next_line.h"
# include "libs/libft/libft.h"
# include "libs/mlx-linux/mlx.h"
# include <fcntl.h>
# include <errno.h>
# include <math.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_fdf
{
	void	*mlx;
	void	*win;
}	t_fdf;


#endif