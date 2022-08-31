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
#include <unistd.h>

#include "src/file_read/file_read.h"

char	*realloc_buf(char *buf, ssize_t bufs_count)
{
	int		i;
	int		j;
	char	*prev_buf;

	prev_buf = buf;
	buf = malloc(sizeof(char) * (BUF_SIZE + 1) * (bufs_count + 1));
	if (buf == NULL)
	{
		free(prev_buf);
		return (NULL);
	}
	i = -1;
	while (++i < bufs_count)
	{
		j = -1;
		while (prev_buf[i * (BUF_SIZE + 1) + ++j] != '\0')
			buf[i * (BUF_SIZE + 1) + j] = prev_buf[i * (BUF_SIZE + 1) + j];
		buf[i * (BUF_SIZE + 1) + j] = '\0';
	}
	free(prev_buf);
	return (buf);
}

void	flatten_file_contents(const char *buf,
			char *file_contents,
			ssize_t bufs_count
			)
{
	int	i;
	int	j;
	int	k;

	k = -1;
	i = -1;
	while (++i < bufs_count)
	{
		j = -1;
		while (buf[i * (BUF_SIZE + 1) + ++j] != '\0')
			file_contents[++k] = buf[i * (BUF_SIZE + 1) + j];
	}
	file_contents[k + 1] = '\0';
}

ssize_t	read_next_buf(char **buf, ssize_t bufs_count, int fd)
{
	*buf = realloc_buf(*buf, bufs_count);
	if (*buf == NULL)
		return (-1);
	return (read(fd, *buf + (bufs_count * (BUF_SIZE + 1)), BUF_SIZE));
}

int	read_whole_file(int fd, char **file_contents)
{
	ssize_t	len;
	ssize_t	bufs_count;
	char	*buf;
	ssize_t	read_bytes;

	len = 0;
	bufs_count = -1;
	buf = NULL;
	read_bytes = read_next_buf(&buf, ++bufs_count, fd);
	if (read_bytes < 0)
		return (free(buf), -1);
	while (read_bytes != 0)
	{
		buf[bufs_count * (BUF_SIZE + 1) + read_bytes] = '\0';
		len += read_bytes;
		read_bytes = read_next_buf(&buf, ++bufs_count, fd);
		if (read_bytes < 0)
			return (free(buf), -1);
	}
	*file_contents = malloc(sizeof(char) * (len + 1));
	if (*file_contents == NULL)
		return (free(buf), -1);
	flatten_file_contents(buf, *file_contents, bufs_count);
	return (free(buf), 0);
}
