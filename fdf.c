/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:55:04 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/21 16:36:29 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int ac, char **av)
{
	t_fdf *env;

	if (ac != 0)
	{
		env = (t_fdf *)malloc(sizeof(t_fdf));
		if (!env)
			return 0;
		env->mlx = mlx_init();
		env->win = mlx_new_window(env->mlx, 1920, 1080, av[1]);
		mlx_hook(env->win, 2, 1L<<0, map_keys, env);
		mlx_loop(env->mlx);
	}
	return 1;
}