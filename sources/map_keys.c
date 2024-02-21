/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_keys.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:37:15 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/21 16:47:06 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int	map_keys(int key_code, t_fdf *param)
{
	// if (param)
	// 	printf("%d\n", key_code);
	if (key_code == KEY_ESC)
		mlx_destroy_window(param->mlx, param->win);
	return (1);
}