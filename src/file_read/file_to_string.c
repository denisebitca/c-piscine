/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aronez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:21:41 by aronez            #+#    #+#             */
/*   Updated: 2022/08/27 17:21:41 by aronez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include <fcntl.h>
#include <unistd.h>

#include "src/libft/libft.h"

#define BUF_SIZE 16384

void	count_len(char buf[BUF_SIZE], ssize_t read_bytes, void *data)
{
	ssize_t	*len;

	(void)buf;
	len = (ssize_t *)data;
	*len += read_bytes;
}

void	cat_bytes(char buf[BUF_SIZE], ssize_t read_bytes, void *data)
{
	char	*file_contents;

	file_contents = (char *)data;
	ft_strncat(file_contents, buf, (int)read_bytes);
}

int	apply_to_file(
		int fd,
		void (*handle_buf)(char[BUF_SIZE], ssize_t, void *),
		void *data
		)
{
	char	buf[BUF_SIZE];
	ssize_t	read_bytes;
	int		i;

	i = -1;
	while (++i < BUF_SIZE)
		buf[i] = '\0';
	read_bytes = read(fd, buf, BUF_SIZE);
	if (read_bytes < 0)
		return (-1);
	while (read_bytes != 0)
	{
		handle_buf(buf, read_bytes, data);
		read_bytes = read(fd, buf, BUF_SIZE);
		if (read_bytes < 0)
			return (-1);
	}
	return (0);
}

int	read_whole_file(int fd, const char *filename, char **file_contents)
{
	ssize_t	len;
	int		i;

	len = 0;
	if (apply_to_file(fd, &count_len, &len))
		return (-1);
	if (close(fd) < 0)
		return (-1);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (-1);
	*file_contents = malloc(sizeof(char) * (len + 1));
	if (*file_contents == NULL)
		return (-1);
	i = -1;
	while (++i < len + 1)
		(*file_contents)[i] = '\0';
	if (apply_to_file(fd, &cat_bytes, *file_contents))
	{
		free(*file_contents);
		return (-1);
	}
	return (0);
}
