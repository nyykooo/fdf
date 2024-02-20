/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:30:00 by ncampbel          #+#    #+#             */
/*   Updated: 2023/10/23 17:09:47 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ns;
	size_t			i;

	ns = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ns[i] == (unsigned char) c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
