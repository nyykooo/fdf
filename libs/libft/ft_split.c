/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:28:12 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/12 14:48:41 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 1;
	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 2));
	if (!array)
		return (NULL);
	array[0] = NULL;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > k)
			array[j++] = ft_substr(s, (unsigned int)k, (size_t)i - k);
	}
	array[j] = NULL;
	return (array);
}
