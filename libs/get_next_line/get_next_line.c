/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncampbel <ncampbel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:56:05 by ncampbel          #+#    #+#             */
/*   Updated: 2024/02/17 17:37:04 by ncampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	char		*line;
	int			reader;

	line = NULL;
	while (1)
	{
		if (buff[0] == '\0')
		{
			reader = read(fd, buff, BUFFER_SIZE);
			if (reader == 0)
				return (line);
			else if (reader == -1)
			{
				if (line != NULL)
					free(line);
				return (NULL);
			}
		}
		line = ft_strjoin_gnl(line, buff);
		if (ft_buffclear(buff) == 1)
			break ;
	}
	return (line);
}
// // MAIN TESTER

// #include <errno.h>
// #include <fcntl.h>
// #include <stdio.h>

// int main(void)
// {
// 	int fd;
// 	fd = open("teste.txt", O_RDONLY);
// 	char *line;
// 	while(line != NULL)
//     {   
//         line = get_next_line(fd);
// 		printf("%s", line);
// 		free(line);
//     }
// 	// printf("%s", line);
// 	// line = gnl(fd);
// 	// printf("%s", line);
// 	// line = gnl(fd);
// 	// printf("%s", line);
// 	// line = gnl(fd);
// 	// printf("%s", line);
// 	// line = gnl(fd);
// 	// printf("%s", line);
// 	// line = gnl(fd);
// 	// printf("%s", line);
// 	// line = gnl(fd);
// 	// printf("%s", line);
// 	// line = gnl(fd);
// 	// printf("%s", line);
// 	// line = gnl(fd);
// 	// printf("%s", line);
// 	// line = gnl(fd);
// 	// printf("%s", line);
// 	// line = gnl(fd);
// 	// printf("%s", line);
// 	return (0);
// }
